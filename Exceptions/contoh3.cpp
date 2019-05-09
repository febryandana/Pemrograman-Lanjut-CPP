/*
      Mengenal Exeption Handling pada C++
      Microsoft Visual Studio Express 2012
      [RS]
*/
#include <iostream>
#include <vector>
#include <exception>
//#include "contoh3.h"
using namespace std;

int main()
{
      cout<<"VECTOR - EXCEPTION HANDLING C++"<<endl;
      cout<<"-------------------------------"<<endl;
      cout<<endl;

      vector <int> narray;
      narray.push_back(53);
      narray.push_back(64);
      cout << narray.at(2);
      try
      {
//            cout<<narray.at(1); //sukses
            cout << narray.at(3); //error
      }
      catch (logic_error &e)
      {
            cout<<"Exception Ditangkap"<<endl;
            cout<<"Pesan : " << e.what() << endl;
      }

// //      _getche();
      return 0;
}
