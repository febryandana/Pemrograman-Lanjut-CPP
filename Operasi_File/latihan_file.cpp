#include <iostream>
#include <fstream>
using namespace std;

int main(){
  ofstream write;
  ifstream read;
  string nama, nim, alamat, isi;
  int pilihan;
  do{
    cout << endl << endl << "MENU" << endl;
    cout << "1. Write to File" << endl;
    cout << "2. Read File" << endl;
    cout << "3. Close" << endl;
    cout << "Choice :";
    cin >> pilihan;
    cin.get();
    switch (pilihan){
      case 1:
        write.open("latihan_file.txt", ios::app);
        cout << "Masukkan nama  : ";
        getline(cin, nama);
        cout << "Masukkan nim  : ";
        getline(cin, nim);
        cout << "Masukkan alamat  : ";
        getline(cin, alamat);
        write << "Nama    : " << nama;
        write << "\nNIM     : " << nim;
        write << "\nAlamat  : " << alamat;
        write << "\n=====================================\n\n";
        write.close();
        break;
      case 2:
        read.open("latihan_file.txt");
        while(getline(read,isi)){
          cout << isi << endl;
        }
        read.close();
        break;
      case 3: return 0;break;
      default:true;
    }
  }while(true);
}
