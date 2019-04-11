#include <iostream>
#include <string>
using namespace std;
class Employee{
protected:
    string nama, idKerja, jabatan;
    int istri, anak, thMasuk;
    double bonus, tunjangan, tunjIstri, tunjAnak;
private:
    void setIdentitas(string name, string id, string pos, int wife, int child, int year){
        nama = name;
        idKerja = id;
        jabatan = pos;
        istri = wife;
        anak = child;
        thMasuk = year;
        int lama = 2019-thMasuk;
        if(lama < 6){
            bonus = tunjangan = 0;
        }else if(lama < 11){
            bonus = 0.05 * lama;
            tunjangan = 0;
        }else{
            bonus = tunjangan = 0.1 * lama;}
        if(istri > 0){
            tunjIstri = 0.1;
        }else{
            tunjIstri = 0;}
        if(anak >= 3){
            tunjAnak = 3 * 0.15;
        }else if(anak >= 1){
            tunjAnak = anak * 0.15;
        }else{
            tunjAnak = 0;}
    }
};
class Manager:public Employee{
private:
    int a,b,c,d,gaji = 4500000, gajiTotal,tunjJabatan;
public:
    void setGaji(){
        a = gaji*bonus;
        b = gaji*tunjangan;
        gajiTotal = gaji+a+b;
        c = gajiTotal*tunjIstri;
        d = gajiTotal*tunjAnak;
        tunjJabatan = 0.1 * gajiTotal;
        gajiTotal = gajiTotal+c+d+tunjJabatan;
    }
    void display(){
        cout << "=========================================" << endl;
        cout << "GAJI BAGIAN MANAJER" << endl << endl;
        cout << "Nama               : " << nama << endl;
        cout << "ID Pegawai         : " << idKerja << endl;
        cout << "Jabatan            : " << jabatan << endl;
        cout << "Istri              : " << istri << endl;
        cout << "Anak               : " << anak << endl;
        cout << "Tahun Masuk        : " << thMasuk << endl;
        cout << "Bonus              : " << a << endl;
        cout << "tunjangan          : " << b << endl;
        cout << "tunjangan istri    : " << c << endl;
        cout << "tunjangan anak     : " << d << endl;
        cout << "tunjangan jabatan  : " << tunjJabatan << endl;
        cout << "Gaji Pokok         : " << gaji << endl;
        cout << "Gaji Total         : " << gajiTotal << endl;
        cout << "=========================================" << endl;
    }
};
class PegawaiTetap:public Employee{
private:
    int a,b,c,d,gaji = 3000000, gajiTotal;
public:
    void setGaji(){
        a = gaji*bonus;
        b = gaji*tunjangan;
        gajiTotal = gaji+a+b;
        c = gajiTotal*tunjIstri;
        d = gajiTotal*tunjAnak;
        gajiTotal = gajiTotal+c+d;
    }
    void display(){
        cout << "=========================================" << endl;
        cout << "GAJI BAGIAN PEGAWAI TETAP" << endl << endl;
        cout << "Nama               : " << nama << endl;
        cout << "ID Pegawai         : " << idKerja << endl;
        cout << "Jabatan            : " << jabatan << endl;
        cout << "Istri              : " << istri << endl;
        cout << "Anak               : " << anak << endl;
        cout << "Tahun Masuk        : " << thMasuk << endl;
        cout << "Bonus              : " << a << endl;
        cout << "tunjangan          : " << b << endl;
        cout << "tunjangan istri    : " << c << endl;
        cout << "tunjangan anak     : " << d << endl;
        cout << "Gaji Pokok         : " << gaji << endl;
        cout << "Gaji Total         : " << gajiTotal << endl;
        cout << "=========================================" << endl;
    }
};
class PegawaiTidakTetap:public Employee{
private:
    int gaji = 3000000, gajiTotal, gajiLembur, lembur;
public:
    void setLembur(int a){
        if(a > 10){
            lembur = a-10;
        }else{
            lembur = 0;
        }
        gajiLembur = lembur*10000;
    }
    void setGaji(){
        gajiTotal = gaji+gajiLembur;
    }
    void display(){
        cout << "=========================================" << endl;
        cout << "GAJI BAGIAN PEGAWAI TIDAK TETAP" << endl << endl;
        cout << "Nama           : " << nama << endl;
        cout << "ID Pegawai     : " << idKerja << endl;
        cout << "Jabatan        : " << jabatan << endl;
        cout << "Istri          : " << istri << endl;
        cout << "Anak           : " << anak << endl;
        cout << "Tahun Masuk    : " << thMasuk << endl;
        cout << "Lama Lembur    : " << lembur << endl;
        cout << "Gaji Pokok     : " << gaji << endl;
        cout << "Gaji Total     : " << gajiTotal << endl;
        cout << "=========================================" << endl;
    }
};
int main(){
    string a,b,c;
    int d,e,f,g;
    Manager mnj;
    PegawaiTetap pt;
    PegawaiTidakTetap ptt;
    cout << "===== KALKULATOR GAJI PEGAWAI =====" << endl;
    cout << "Nama        : ";
    getline(cin, a);
    cout << "ID Pegawai  : ";
    cin >> b;
    cout << "Jabatan     : ";
    cin.ignore();
    getline(cin, c);
    cout << "Istri       : ";
    cin >> d;
    cout << "Anak        : ";
    cin >> e;
    cout << "Tahun Masuk : ";
    cin >> f;
    if(c=="Manajer" || c=="manajer"){
        mnj.setIdentitas(a,b,c,d,e,f);
        mnj.setGaji();
        mnj.display();
    }else if(c=="Pegawai Tetap" || c=="pegawai tetap"){
        pt.setIdentitas(a,b,c,d,e,f);
        pt.setGaji();
        pt.display();
    }else if(c=="Pegawai Tidak Tetap" || c=="pegawai tidak tetap"){
        cout << "Lama bekerja (jam) : ";
        cin >> g;
        ptt.setIdentitas(a,b,c,d,e,f);
        ptt.setLembur(g);
        ptt.setGaji();
        ptt.display();
    }else{
        cout << "Jabatan tidak ada" << endl;}
    return 0;
}
