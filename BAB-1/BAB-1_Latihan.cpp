// Moch. Febryandana Nurfahri
// 185150301111016
// Teknik Komputer B

#include <iostream>
using namespace std;

class Buku{
private:
    int kata, kataTotal, lembar, halaman;
public:
    void setBuku(int k, int l){
        kata=k;
        lembar=l;
        halaman = lembar*2;
        kataTotal = 2*kata*halaman;
        //1 halaman = 100 kata
    }

    int getWaktu(){
        return halaman*2;
        //1 hari = 1/2 halaman. Untuk satu halaman butuh 2 hari
    }
    int getKataTotal(){
        return kataTotal;
    }
    void getBuku(){
        cout << "Buku terdiri dari " << lembar << " lembar atau " << halaman << " halaman" << endl;
        cout << "Tiap hari mahasiswa A mampu menulis sebanyak " << kata << " kata atau setara dengan 1/2 halaman" << endl;
        cout << "Total kata yang ditulis sebanyak " << kataTotal << " kata" << endl;
    }
};

int main(){
    Buku bk;
    cout << "Mahasiswa A  ingin menulis pada sebuah buku tulis yang ingin dia miliki, isi lembar buku" << endl ;
    cout << "tersebut adalah 50 lembar. Setiap harinya ia menulis sebanyak 100 kata perhari yang" << endl;
    cout << "cukup untuk 1/2 halaman buku. Buatlah rumus untuk menghitung berapa lama ia" << endl;
    cout << "menghabiskan 1 buku tersebut serta identifikasilah objek, dan karakteristiknya kemudian" << endl;
    cout << "implementasikan dalam bentuk class." << endl;
    cout << "===========================================================================================" << endl << endl;
    cout << "-----JAWABAN-----" << endl;
    bk.setBuku(100,50);     //memanggil method setBuku dengan parameter 100 kata dan 50 hari
    bk.getBuku();           //memanggil method getBuku
    cout << endl;
    cout << "Mahasiswa menghabiskan buku tersebut dalam " << bk.getWaktu() << " hari" << endl;
    return 0;
}
