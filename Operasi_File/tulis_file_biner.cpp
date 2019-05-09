#include <fstream>
#include <iostream>
using namespace std;

int main(){
  ofstream tulis;
  int isi[] = {1,2,3,4,5};
  tulis.open("coba.bin", ios::binary);

  for(int i=0; i<sizeof(isi)/sizeof(int); i++){
    tulis.write((char*)&isi[i], sizeof(int));
  }
  tulis.close();
}
