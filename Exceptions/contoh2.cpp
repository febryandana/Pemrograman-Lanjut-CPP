//Menampilkan error
//
// #include<iostream>
// using namespace std;
//
// int main(){
//   int *z = new int[99999999999];
// }
// //
#include <iostream>
#include <exception>
using namespace std;

int main () {
  try
  {
    int* myarray= new int[100000000000];
  }
  catch (exception& e)
  {
    cout << "Standard exception: " << e.what() << endl;
  }
  return 0;
}
