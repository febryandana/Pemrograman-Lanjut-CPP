#include <fstream>
#include <iostream>
using namespace std;

int main(){
  ifstream baca;
  baca.open("coba.bin", ios::binary);
  int isi;
  while(!baca.eof()){
    baca.read((char *)&isi, sizeof(int));
    if(!baca.eof()) cout << isi << endl;
  }
  baca.close();
}
