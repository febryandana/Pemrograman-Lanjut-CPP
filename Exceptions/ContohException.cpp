#include <iostream>
#include <stdexcept>
using namespace std;

class Exception:public runtime_error{
public:
  Exception():runtime_error("nilai bukan bilangan bulat positif"){}
};

int main(){
  double x;
  try{
    cout << "Masukan sebuah bilangan bulat positif : ";
    cin >> x;
    if(x <= 0){
      throw Exception();
    } else {
      cout << "Nilai yang di masukan adalah : " << x << endl;
    }
  }
  catch(Exception &e){
    cout << e.what() << endl;
  }
  return 0;
}
