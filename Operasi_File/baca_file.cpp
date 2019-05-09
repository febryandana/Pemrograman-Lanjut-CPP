#include <fstream>
#include <iostream>
using namespace std;

int main(){
  ifstream baca;
  baca.open("coba.txt");
  char isi[80];
  string isi2;
  while(!baca.eof()){
    baca.getline(isi, 80);
    cout << isi << endl;
  }
  while(getline(baca,isi2)){
    cout << isi2 << endl;
  }
  baca.close();
  return 0;
}
