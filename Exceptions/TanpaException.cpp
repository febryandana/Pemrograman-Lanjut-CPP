#include <iostream>
using namespace std;

double quotient(int numerator, int denominator){
  return static_cast<double>(numerator)/denominator;
}

int main(){
  int number1=4;
  int number2=0;
  double result;
  result = quotient(number1, number2);
  cout << "The quotient is " << result << endl;
}
