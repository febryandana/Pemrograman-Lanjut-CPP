#include <iostream>
using namespace std;
class Siswa {
private:
    string nama;
    string alamat;
    int umur;
    double nilaiMatematika;
    double nilaiInggris;
    double nilaiIPA;
    double rataRata;
public:
    Siswa();
    Siswa(string nama, string alamat, int umur);
    void setNama(string nama);
    void setAlamat(string alamat);
    void setUmur(int umur);
    void setMatematika(int matematika);
    void setInggris(int inggris);
    void setIPA(int ipa);
    double getRataRata();
    void cetak();
};
Siswa::Siswa() {
    nama = "";
    alamat = "";
    umur = 0;
}
Siswa::Siswa(string a, string b, int c) {
    nama = a;
    alamat = b;
    umur = c;
}
void Siswa::setNama(string nama) {
    this->nama = nama;
}
void Siswa::setAlamat(string alamat) {
    this->alamat = alamat;
}
void Siswa::setUmur(int umur) {
    this->umur = umur;
}
void Siswa::setMatematika(int matematika) {
    nilaiMatematika = matematika;
}
void Siswa::setInggris(int inggris) {
    nilaiInggris = inggris;
}
void Siswa::setIPA(int ipa) {
    nilaiIPA = ipa;
}
double Siswa::getRataRata() {
    return (nilaiMatematika + nilaiInggris + nilaiIPA)/3;
}
void Siswa::cetak() {
    cout << "Siswa dengan nama " << nama << endl;
    cout << "beralamat di " << alamat << endl;
    cout << "berumur " << umur << endl;
    cout << "mempunyai nilai rata-rata " << getRataRata() << endl;
}
int main() {
    //Siswa anna = new Siswa();
    Siswa anna;
    anna.setNama("Anna");
    anna.setAlamat("Malang");
    anna.setUmur(20);
    anna.setMatematika(100);
    anna.setInggris(80);
    anna.setIPA(89);
    anna.cetak();
    // menggunakan constructor lain
    cout << "==========================" << endl;
    Siswa *chris = new Siswa("Chris", "Kediri", 21);
    chris->setMatematika(70);
    chris->setInggris(60);
    chris->setMatematika(70);
    chris->cetak();

    // siswa atas nama Chris diubah informasinya melalui
    // method
    cout << "==========================" << endl;
    chris->setAlamat("Surabaya");
    chris->setUmur(22);
    chris->cetak();
}
