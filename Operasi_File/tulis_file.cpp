#include <fstream>
#include <iostream>
using namespace std;

int main(){
  ofstream tulis;
  tulis.open("coba.txt");
  tulis << "saya mencoba menulis\n"
        << "ke dalam sebuah file teks";
  tulis.close();
}
