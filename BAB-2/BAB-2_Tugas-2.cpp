#include <iostream>
using namespace std;
class Matematika{
private:
    int hasilKali, j, k;
    double hasilBagi;
public:
    static int Penjumlahan(int input1, int input2);
    static int Pengurangan(int input1, int input2);
    int Perkalian(int input1, int input2);
    double Pembagian(double input1, double input2);
    void Sederhana(int input1, int input2);
};
int Matematika::Penjumlahan(int input1, int input2){
    int hasil = input1 + input2;
    return hasil;
}
int Matematika::Pengurangan(int input1, int input2){
    int hasil = input1 - input2;
    return hasil;
}
int Matematika::Perkalian(int input1, int input2){
    hasilKali = input1 * input2;
    return hasilKali;
}
double Matematika::Pembagian(double input1, double input2){
    hasilBagi = input1 / input2;
    return hasilBagi;
}
void Matematika::Sederhana(int input1, int input2){
    j = input1/input2;
    k = input1%input2;
    if(k == 0){
        cout << j << endl;}
    else{
        cout << j << " " << k << "/" << input2;}
}
int main(){
    Matematika nilai;
    int a,b;
    cout << "=== KALKULATOR SEDERHANA + PENYEDERHANA PECAHAN ===" << endl;
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl << endl;
    cout << "Masukkan nilai pertama = ";
    cin >> a;
    cout << "Masukkan nilai kedua = ";
    cin >> b;
    cout << endl;
    cout << "Hasil Penjumlahan = " << Matematika::Penjumlahan(a,b) << endl;
    cout << "Hasil Pengurangan = " << Matematika::Pengurangan(a,b) << endl;
    cout << "Hasil Perkalian   = " << nilai.Perkalian(a,b) << endl;
    cout << "Hasil Pembagian   = " << nilai.Pembagian(a,b) << endl;
    cout << endl;
    cout << "Hasil sederhana dari " << a << "/" << b << " adalah = ";
    nilai.Sederhana(a,b);
    cout << endl;
    return 0;
}
