#include <iostream>
#include <string>
using namespace std;
int keluar();
string div1 = "\n=========================================\n";
string div2 = "\n-----------------------------------------\n";
class Siam{
private:
    string nama, nim, jurusan;
    string namaMatkul[10], kodeMatkul[10];
    int sks, sksIdeal, sksTotal=0, banyakMatkul, sksMatkul[10];
    double ipk, ipkLama;
public:
    void setLogin(){
        cout << div2 << "LOGIN SIAM" << div2;
        cin.ignore();
        cout << "NAMA       : ";
        getline(cin,nama);
        cout << "NIM        : ";
        getline(cin, nim);
        cout << "JURUSAN    : ";
        getline(cin, jurusan);
        cout << div1;
        cout << "Selamat datang, " << nama << endl;
    }
    void cekSks(double a){
        if(a < 1.50){
            sksIdeal = 12;
        } else if(a < 2.00){
            sksIdeal = 15;
        } else if(a < 2.50){
            sksIdeal = 18;
        } else if(a < 3.00){
            sksIdeal = 21;
        } else{
            sksIdeal = 24;}
    }
    void tambahMatkul(){
        cout << div1;
        cout << "TAMBAH MATAKULIAH" << div2;
        cout << "Masukkan IPK semester lama : ";
        cin >> ipkLama;
        cekSks(ipkLama);
        cout << div2;
        cout << "sks yang bisa Anda ambil maksimal " << sksIdeal << " sks" << endl;
        cout << "Masukkan banyak matakuliah yang akan diambil : ";
        cin >> banyakMatkul;
        cout << endl;
        for(int i=0; i<banyakMatkul; i++){
            cout << endl;
            cin.ignore();
            cout << "Masukkan Nama Matakuliah   : ";
            getline(cin, namaMatkul[i]);
            cout << "Masukkan Kode Matakuliah   : ";
            getline(cin, kodeMatkul[i]);
            cout << "Masukkan sks Matakuliah    : ";
            cin >> sks;
            sksMatkul[i] = sks;
            sksTotal += sks;}
        if(sksTotal>sksIdeal){
            system("clear||cls");
            cout << "Maaf, sks Anda melebihi batas, tolong ulangi" << div2;
            reset();
            tambahMatkul();
        } else{
            cout << endl << "Penambahan Matakuliah sukses" << endl;
        }
    }
    void getNamaMatkul(){
        cout << div1;
        cout << "Daftar Matakuliah yang telah diambil" << div2;
        for(int i=0; i<banyakMatkul; i++){
            cout << "Matkul ke-" << i+1 << endl;
            cout << "Nama Matakuliah    : " << namaMatkul[i] << endl;
            cout << "Kode Matakuliah    : " << kodeMatkul[i] << endl;
            cout << "sks Matakuliah     : " << sksMatkul[i] << endl;
            cout << endl;}
        cout << "Total sks = " << sksTotal << endl << endl;
    }
    void reset(){
        sksTotal=0;
        fill(begin(namaMatkul), end(namaMatkul), 0);
        fill(begin(kodeMatkul), end(kodeMatkul), 0);
        fill(begin(sksMatkul), end(sksMatkul), 0);
    }
};
int main(){
    Siam s1, s2, s3;
    int pilih, pilih2;
    system("clear||cls");
    cout << "SISTEM AKADEMIK MAHASISWA UNIVERSITAS BERSAMA" << endl;
    cout << div1 << endl;
    cout << "Pilih Akun Mahasiswa dibawah ini" << endl;
    cout << "1. Mahasiswa A" << endl;
    cout << "2. Mahasiswa B" << endl;
    cout << "3. Mahasiswa C" << endl;
    cout << "Pilih : ";
    cin >> pilih;
    switch(pilih){
        case 1:
            s1.setLogin();
            s1.tambahMatkul();
            s1.getNamaMatkul();
            s1.reset();
            keluar();
            break;
        case 2:
            s2.setLogin();
            s2.tambahMatkul();
            s2.getNamaMatkul();
            s2.reset();
            keluar();
            break;
        case 3:
            s3.setLogin();
            s3.tambahMatkul();
            s3.getNamaMatkul();
            s3.reset();
            keluar();
            break;
        default:
            main();}
}
int keluar(){
    int d;
    cout << div2;
    cout << "1. Keluar Akun" << endl;
    cout << "2. Keluar Apps" << endl;
    cout << "Pilih (1/2): ";
    cin >> d;
    if(d==1){
        system("clear||cls");
        main();
    }else if(d==2){
        return 0;
    }else{
        keluar();}
}
