#include <iostream>
using namespace std;
class Perusahaan{
public:
    Perusahaan(){
        cout << "======= APLIKASI PENGHITUNG GAJI PEKERJA PERUSAHAAN HUBLA =======" << endl;
        cout << endl << endl;
    }
    virtual void setIdentitas()=0;
    virtual void hitungGaji()=0;
    virtual void cetakInformasi()=0;
};
class Buruh:public Perusahaan{
private:
    string nama, nip;
    int upah, gaji;
public:
    Buruh(){
        cout << "GAJI BURUH" << endl;
    }
    void setIdentitas(){
        cout << "Masukkan Nama Buruh    : ";
        getline(cin, nama);
        cout << "Masukkan NIP           : ";
        cin >> nip;
        cout << "Masukkan Upah Mingguan : ";
        cin >> upah;
        cout << endl;
        hitungGaji();
    }
    void hitungGaji(){
        gaji = upah;
    }
    void cetakInformasi(){
        cout << "\nHASIL PERHITUNGAN GAJI" << endl;
        cout << "Nama   : " << nama << endl;
        cout << "NIP    : " << nip << endl;
        cout << "Upah   : " << gaji << endl;
        cout << endl << endl;
    }
};
class Sales:public Perusahaan{
private:
     string nama, nip;
     int gaji, gajiPokok, komisi, totalPenjualan;
public:
    Sales(){
        cout << "GAJI SALES" << endl;
    }
    void setIdentitas(){
        cout << "Masukkan Nama Sales     : ";
        cin.ignore();
        getline(cin, nama);
        cout << "Masukkan NIP            : ";
        cin >> nip;
        cout << "Masukkan Gaji Pokok     : ";
        cin >> gajiPokok;
        cout << "Masukkan Komisi         : ";
        cin >> komisi;
        cout << "Masukkan Total Penjualan: ";
        cin >> totalPenjualan;
        cout << endl;
        hitungGaji();
    }
    void hitungGaji(){
       gaji = gajiPokok + (komisi * totalPenjualan);
    }
    void cetakInformasi(){
        cout << "\nHASIL PERHITUNGAN GAJI" << endl;
        cout << "Nama   : " << nama << endl;
        cout << "NIP    : " << nip << endl;
        cout << "Gaji   : " << gaji << endl;
        cout << endl << endl;
    }

};
class ProjekManajer:public Perusahaan{
private:
    string nama, nip;
    int gaji, gajiPokok, komisi, totalHasilProjek;
    double pajak = 0.05;
public:
    ProjekManajer(){
        cout << "GAJI PROJEK MANAJER" << endl;
    }
    void setIdentitas(){
        cout << "Masukkan Nama Manajer      : ";
        cin.ignore();
        getline(cin, nama);
        cout << "Masukkan NIP               : ";
        cin >> nip;
        cout << "Masukkan Gaji Pokok        : ";
        cin >> gajiPokok;
        cout << "Masukkan Komisi            : ";
        cin >> komisi;
        cout << "Masukkan Total Hasil Projek: ";
        cin >> totalHasilProjek;
        cout << endl;
        hitungGaji();
    }
    void hitungGaji(){
        int a = gajiPokok + (komisi * totalHasilProjek);
        gaji = a - (a*pajak);
    }
    void cetakInformasi(){
        cout << "\nHASIL PERHITUNGAN GAJI" << endl;
        cout << "Nama   : " << nama << endl;
        cout << "NIP    : " << nip << endl;
        cout << "Gaji   : " << gaji << endl;
        cout << endl << endl;
    }
};
int main(){
    Buruh b;
    b.setIdentitas();
    b.cetakInformasi();
    Sales s;
    s.setIdentitas();
    s.cetakInformasi();
    ProjekManajer pm;
    pm.setIdentitas();
    pm.cetakInformasi();
    return 0;
}
