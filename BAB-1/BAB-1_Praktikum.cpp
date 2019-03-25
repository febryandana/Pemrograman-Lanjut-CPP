#include <iostream>
#include <string>
using namespace std;

class Mobil{
private:
    string nomorPlat;
    string warna;
    string manufaktur;
    int kecepatan;
public:
    void setNomorPlat(string n){
        this->nomorPlat=n;
    }
    void setWarna(string w){
        this->warna=w;
    }
    void setManufaktur(string m){
        this->manufaktur=m;
    }
    void setKecepatan(int k){
        this->kecepatan=k;
    }
    void display(){
        cout<<"Mobil anda berplat nomor " <<nomorPlat<< "dan berwarna "<< warna<<endl;
        cout<<"Diproduksi oleh perusahaan "<<manufaktur<<endl;
        cout<<"Mobil anda mampu menempuh kecepatan "<<kecepatan<<"km/h"<<endl;
    }
};

int main(){
    cout<<"====================================="<<endl;
    Mobil xenia;    //cara 1 menginstansiasi objek
    xenia.setNomorPlat("N 1610 BG");
    xenia.setManufaktur("Daihatsu");
    xenia.setWarna("putih");
    xenia.setKecepatan(100);
    xenia.display();
    cout<<"====================================="<<endl;
    Mobil *avanza=new Mobil();
    avanza->setNomorPlat("N 1620 GG");
    avanza->setManufaktur("Toyota");
    avanza->setWarna("hitam");
    avanza->setKecepatan(100);
    avanza->display();
    cout<<"====================================="<<endl;
    cout<<"mengubah warna mobil xenia"<<endl;
    xenia.setWarna("merah");
    xenia.display();
}


//SOAL 3
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Mobil{
//private:
//    string nomorPlat;
//    string warna;
//    string manufaktur;
//    int kecepatan;
//public:
//    void setNomorPlat(string n){
//        this->nomorPlat=n;
//    }
//    void setWarna(string w){
//        this->warna=w;
//    }
//    void setManufaktur(string m){
//        this->manufaktur=m;
//    }
//    void setKecepatan(int k){
//        this->kecepatan=k;
//    }
//    void display(){
//        cout<<endl<<"====================================="<<endl;
//        cout<<"Mobil anda berplat nomor " <<nomorPlat<< " dan berwarna "<< warna<<endl;
//        cout<<"Diproduksi oleh perusahaan "<<manufaktur<<endl;
//        cout<<"Mobil anda mampu menempuh kecepatan "<<kecepatan<<"km/h"<<endl;
//    }
//};
//
//int main(){
//    string plat, manufak,wrn;
//    int speed;
//    double wakt;
//    Mobil mobil;
//    cout<<"====================================="<<endl;
//    cout << "Masukkan plat nomer mobil Anda : ";
//    getline(cin, plat);
//    cout << "Masukkan perusahaan manufaktur : ";
//    getline(cin, manufak);
//    cout << "Masukkan warna mobil Anda      : ";
//    getline(cin, wrn);
//    cout << "Masukkan kecepatan mobil Anda  : ";
//    cin >> speed;
//    cin.ignore();
//    mobil.setNomorPlat(plat);
//    mobil.setManufaktur(manufak);
//    mobil.setWarna(wrn);
//    mobil.setKecepatan(speed);
//    mobil.display();
//    cout<<endl<<"====================================="<<endl;
//    cout<<"mengubah warna mobil"<<endl;
//    cout << "Warna baru : ";
//    getline(cin, wrn);
//    mobil.setWarna(wrn);
//    mobil.display();
//}


//SOAL 4
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Mobil{
//private:
//    string nomorPlat;
//    string warna;
//    string manufaktur;
//    int kecepatan;
//    double waktu;
//public:
//    void setNomorPlat(string n){
//        this->nomorPlat=n;
//    }
//    void setWarna(string w){
//        this->warna=w;
//    }
//    void setManufaktur(string m){
//        this->manufaktur=m;
//    }
//    void setKecepatan(int k){
//        this->kecepatan=k;
//    }
//    double setWaktu(double wkt){
//        this->waktu=wkt;
//    }
//    void display(){
//        cout<<endl<<"====================================="<<endl;
//        cout<<"Mobil anda berplat nomor " <<nomorPlat<< " dan berwarna "<< warna<<endl;
//        cout<<"Diproduksi oleh perusahaan "<<manufaktur<<endl;
//        cout<<"Mobil anda mampu menempuh kecepatan "<<kecepatan<<"km/h"<<endl;
//        cout<< "Waktu tempuh mobil anda "<<waktu<<" detik" << endl;
//    }
//};
//
//int main(){
//    string plat, manufak,wrn;
//    int speed;
//    double wakt;
//    Mobil mobil;
//    cout<<"====================================="<<endl;
//    cout << "Masukkan plat nomer mobil Anda : ";
//    getline(cin, plat);
//    cout << "Masukkan perusahaan manufaktur : ";
//    getline(cin, manufak);
//    cout << "Masukkan warna mobil Anda      : ";
//    getline(cin, wrn);
//    cout << "Masukkan kecepatan mobil Anda  : ";
//    cin >> speed;
//    cout << "Masukkan waktu tempuh          : ";
//    cin >> wakt;
//    cin.ignore();
//    mobil.setNomorPlat(plat);
//    mobil.setManufaktur(manufak);
//    mobil.setWarna(wrn);
//    mobil.setKecepatan(speed);
//    mobil.setWaktu(wakt);
//    mobil.display();
//    cout<<endl<<"====================================="<<endl;
//    cout<<"mengubah warna mobil"<<endl;
//    cout << "Warna baru : ";
//    getline(cin, wrn);
//    mobil.setWarna(wrn);
//    mobil.display();
//}

//SOAL 5
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Mobil{
//private:
//    string nomorPlat;
//    string warna;
//    string manufaktur;
//    int kecepatan;
//    double waktu;
//public:
//    void setNomorPlat(string n){
//        this->nomorPlat=n;
//    }
//    void setWarna(string w){
//        this->warna=w;
//    }
//    void setManufaktur(string m){
//        this->manufaktur=m;
//    }
//    void setKecepatan(int k){
//        this->kecepatan=k;
//    }
//    double setWaktu(double wkt){
//        this->waktu=wkt;
//        ubahSekon(waktu);
//    }
//    double ubahSekon(double sec){
//        this->waktu=sec*3600;
//    }
//    void display(){
//        cout<<endl<<"====================================="<<endl;
//        cout<<"Mobil anda berplat nomor " <<nomorPlat<< " dan berwarna "<< warna<<endl;
//        cout<<"Diproduksi oleh perusahaan "<<manufaktur<<endl;
//        cout<<"Mobil anda mampu menempuh kecepatan "<<kecepatan<<"km/h"<<endl;
//        cout<< "Waktu tempuh mobil anda "<<waktu<<" detik" << endl;
//    }
//};
//
//int main(){
//    string plat, manufak,wrn;
//    int speed;
//    double wakt;
//    Mobil mobil;
//    cout<<"====================================="<<endl;
//    cout << "Masukkan plat nomer mobil Anda : ";
//    getline(cin, plat);
//    cout << "Masukkan perusahaan manufaktur : ";
//    getline(cin, manufak);
//    cout << "Masukkan warna mobil Anda      : ";
//    getline(cin, wrn);
//    cout << "Masukkan kecepatan mobil Anda  : ";
//    cin >> speed;
//    cout << "Masukkan waktu tempuh          : ";
//    cin >> wakt;
//    cin.ignore();
//    mobil.setNomorPlat(plat);
//    mobil.setManufaktur(manufak);
//    mobil.setWarna(wrn);
//    mobil.setKecepatan(speed);
//    mobil.setWaktu(wakt);
//    mobil.display();
//    cout<<endl<<"====================================="<<endl;
//    cout<<"mengubah warna mobil"<<endl;
//    cout << "Warna baru : ";
//    getline(cin, wrn);
//    mobil.setWarna(wrn);
//    mobil.display();
//}


//SOAL 6
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Mobil{
//private:
//    string nomorPlat;
//    string warna;
//    string manufaktur;
//    int kecepatan;
//    double waktu;
//public:
//    void setNomorPlat(string n){
//        this->nomorPlat=n;
//    }
//    void setWarna(string w){
//        this->warna=w;
//    }
//    void setManufaktur(string m){
//        this->manufaktur=m;
//    }
//    void setKecepatan(int k){
//        this->kecepatan=k;
//        rubahKecepatan(kecepatan);
//    }
//    double setWaktu(double wkt){
//        this->waktu=wkt;
//        ubahSekon(waktu);
//    }
//    double ubahSekon(double sec){
//        this->waktu=sec*3600;
//    }
//    void rubahKecepatan(int kec){
//        this->kecepatan=kec/3.6;
//    }
//    void display(){
//        cout<<endl<<"====================================="<<endl;
//        cout<<"Mobil anda berplat nomor " <<nomorPlat<< " dan berwarna "<< warna<<endl;
//        cout<<"Diproduksi oleh perusahaan "<<manufaktur<<endl;
//        cout<<"Mobil anda mampu menempuh kecepatan "<<kecepatan<<" m/s"<<endl;
//        cout<< "Waktu tempuh mobil anda "<<waktu<<" detik" << endl;
//    }
//};
//
//int main(){
//    string plat, manufak,wrn;
//    int speed;
//    double wakt;
//    Mobil mobil;
//    cout<<"====================================="<<endl;
//    cout << "Masukkan plat nomer mobil Anda : ";
//    getline(cin, plat);
//    cout << "Masukkan perusahaan manufaktur : ";
//    getline(cin, manufak);
//    cout << "Masukkan warna mobil Anda      : ";
//    getline(cin, wrn);
//    cout << "Masukkan kecepatan mobil Anda  : ";
//    cin >> speed;
//    cout << "Masukkan waktu tempuh          : ";
//    cin >> wakt;
//    cin.ignore();
//    mobil.setNomorPlat(plat);
//    mobil.setManufaktur(manufak);
//    mobil.setWarna(wrn);
//    mobil.setKecepatan(speed);
//    mobil.setWaktu(wakt);
//    mobil.display();
//    cout<<endl<<"====================================="<<endl;
//    cout<<"mengubah warna mobil"<<endl;
//    cout << "Warna baru : ";
//    getline(cin, wrn);
//    mobil.setWarna(wrn);
//    mobil.display();
//}


//SOAL 7
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Mobil{
//private:
//    string nomorPlat;
//    string warna;
//    string manufaktur;
//    int kecepatan, jarak;
//    double waktu;
//public:
//    void setNomorPlat(string n){
//        this->nomorPlat=n;
//    }
//    void setWarna(string w){
//        this->warna=w;
//    }
//    void setManufaktur(string m){
//        this->manufaktur=m;
//    }
//    void setKecepatan(int k){
//        this->kecepatan=k;
//        rubahKecepatan(kecepatan);
//    }
//    double setWaktu(double wkt){
//        this->waktu=wkt;
//        ubahSekon(waktu);
//    }
//    double ubahSekon(double sec){
//        this->waktu=sec*3600;
//    }
//    void rubahKecepatan(int kec){
//        this->kecepatan=kec/3.6;
//    }
//    void hitungJarak(){
//        jarak = kecepatan*waktu;
//    }
//    void display(){
//        cout<<endl<<"====================================="<<endl;
//        cout<<"Mobil anda berplat nomor " <<nomorPlat<< " dan berwarna "<< warna<<endl;
//        cout<<"Diproduksi oleh perusahaan "<<manufaktur<<endl;
//        cout<<"Mobil anda mampu menempuh kecepatan "<<kecepatan<<" m/s"<<endl;
//        cout<<"Waktu tempuh mobil anda "<<waktu<<" detik" << endl;
//        cout<<"Jarak yang dapat ditempuh "<<jarak<<" meter"<<endl;
//    }
//};
//
//int main(){
//    string plat, manufak,wrn;
//    int speed;
//    double wakt;
//    Mobil mobil;
//    cout<<"====================================="<<endl;
//    cout << "Masukkan plat nomer mobil Anda : ";
//    getline(cin, plat);
//    cout << "Masukkan perusahaan manufaktur : ";
//    getline(cin, manufak);
//    cout << "Masukkan warna mobil Anda      : ";
//    getline(cin, wrn);
//    cout << "Masukkan kecepatan mobil Anda  : ";
//    cin >> speed;
//    cout << "Masukkan waktu tempuh          : ";
//    cin >> wakt;
//    cin.ignore();
//    mobil.setNomorPlat(plat);
//    mobil.setManufaktur(manufak);
//    mobil.setWarna(wrn);
//    mobil.setKecepatan(speed);
//    mobil.setWaktu(wakt);
//    mobil.display();
//    cout<<endl<<"====================================="<<endl;
//    cout<<"mengubah warna mobil"<<endl;
//    cout << "Warna baru : ";
//    getline(cin, wrn);
//    mobil.setWarna(wrn);
//    mobil.display();
//}


//SOAL 8
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Mobil{
//private:
//    string nomorPlat;
//    string warna;
//    string manufaktur;
//    int kecepatan, jarak;
//    double waktu;
//public:
//    void setNomorPlat(string n){
//        this->nomorPlat=n;
//    }
//    void setWarna(string w){
//        this->warna=w;
//    }
//    void setManufaktur(string m){
//        this->manufaktur=m;
//    }
//    void setKecepatan(int k){
//        this->kecepatan=k;
//        rubahKecepatan(kecepatan);
//    }
//    double setWaktu(double wkt){
//        this->waktu=wkt;
//        ubahSekon(waktu);
//    }
//    double ubahSekon(double sec){
//        this->waktu=sec*3600;
//    }
//    void rubahKecepatan(int kec){
//        this->kecepatan=kec/3.6;
//    }
//    void hitungJarak(){
//        jarak = kecepatan*waktu;
//    }
//    void display(){
//        cout<<endl<<"====================================="<<endl;
//        cout<<"Mobil anda berplat nomor " <<nomorPlat<< " dan berwarna "<< warna<<endl;
//        cout<<"Diproduksi oleh perusahaan "<<manufaktur<<endl;
//        cout<<"Mobil anda mampu menempuh kecepatan "<<kecepatan<<" m/s"<<endl;
//        cout<<"Waktu tempuh mobil anda "<<waktu<<" detik" << endl;
//        cout<<"Jarak yang dapat ditempuh "<<jarak/1000<<" kilometer"<<endl;
//    }
//};
//
//int main(){
//    string plat, manufak,wrn;
//    int speed;
//    double wakt;
//    Mobil mobil;
//    cout<<"====================================="<<endl;
//    cout << "Masukkan plat nomer mobil Anda : ";
//    getline(cin, plat);
//    cout << "Masukkan perusahaan manufaktur : ";
//    getline(cin, manufak);
//    cout << "Masukkan warna mobil Anda      : ";
//    getline(cin, wrn);
//    cout << "Masukkan kecepatan mobil Anda  : ";
//    cin >> speed;
//    cout << "Masukkan waktu tempuh          : ";
//    cin >> wakt;
//    cin.ignore();
//    mobil.setNomorPlat(plat);
//    mobil.setManufaktur(manufak);
//    mobil.setWarna(wrn);
//    mobil.setKecepatan(speed);
//    mobil.setWaktu(wakt);
//    mobil.display();
//    cout<<endl<<"====================================="<<endl;
//    cout<<"mengubah warna mobil"<<endl;
//    cout << "Warna baru : ";
//    getline(cin, wrn);
//    mobil.setWarna(wrn);
//    mobil.display();
//}
