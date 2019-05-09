#include <iostream>
#include "DivideByZeroException.h"

using namespace std;

double quotient(int numerator, int denominator){
  if(denominator==0){
    throw DivideByZeroException();
  }
  return static_cast<double>(numerator)/denominator;
}

int main(){
  int number1=4;
  int number2=0;
  double result;
  try{
    result = quotient(number1, number2);
    cout << "The quotient is " << result << endl;
  }
  catch(DivideByZeroException &divideByZeroException){
    cout << "Exception occured: " << divideByZeroException.what() << endl;
  }
  return 0;
}
