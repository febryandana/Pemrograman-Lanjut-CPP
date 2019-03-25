#include <iostream>
using namespace std;

class Aritmatika{
public:
   virtual void hitungPenjumlahan(int a, int b);
   static void hitungPerkalian(int a, int b);
   static void hitungPengurangan(int a, int b);
};
void Aritmatika::hitungPenjumlahan(int a, int b){
    int nilai = a + b;
    cout << "nilai penjumlahan adalah : " << nilai << endl;
}
void Aritmatika::hitungPerkalian(int a, int b){
    int nilai = a*b;
    cout << "nilai perkalian adalah : " << nilai << endl;
}
void Aritmatika::hitungPengurangan(int a, int b){
    int nilai = a - b;
    cout << "nilai pengurangan adalah : " << nilai << endl;
}


int main(){
    int nil1, nil2, value1, value2;
    cout << "masukkan nilai 1 : ";
    cin >> nil1;
    cout << "masukkan nilai 2 : ";
    cin >> nil2;
    //memanggil method static
    Aritmatika::hitungPengurangan(nil1, nil2);
    cout << "masukkan nilai 1 : ";
    cin >> nil1;
    cout << "masukkan nilai 2 : ";
    cin >> nil2;
    //memanggil method static
    Aritmatika::hitungPerkalian(nil1, nil2);
    cout << "masukkan nilai 1 : ";
    cin >> value1;
    cout << "masukkan nilai 2 : ";
    cin >> value2;
    //memanggil method NONstatic harus melalui objek
    Aritmatika *a = new Aritmatika();
    a->hitungPenjumlahan(value1, value2);
}
