#include <iostream>
#include <fstream>
using namespace std;

int main(){
  ofstream write;
  ifstream read;
  int totalHarian, out, totalSeluruh=0, pilihan;
  do{
    cout << endl << endl << "MENU" << endl;
    cout << "1. Masukkan total penjualan harian" << endl;
    cout << "2. Tampilkan total penjualan harian" << endl;
    cout << "3. Hitung seluruh total penjualan" << endl;
    cout << "4. Keluar" << endl;
    cout << "Choice :";
    cin >> pilihan;
    cin.get();
    switch (pilihan){
      case 1:
        write.open("latihan2.txt", ios::app);
        cout << "Masukkan total penjualan  : ";
        cin >> totalHarian;
        write << totalHarian << endl;
        write.close();
        break;
      case 2:
        read.open("latihan2.txt");
        while(read >> out){
          cout << "Rp " << out << ",00" << endl;
          totalSeluruh = totalSeluruh + out;
        }
        read.close();
        break;
      case 3:
        cout << "Total Seluruh Penjualan : Rp " << totalSeluruh << ",00" << endl;
        break;
      case 4: return 0; break;
      default:true;
    }
  }while(true);
}
