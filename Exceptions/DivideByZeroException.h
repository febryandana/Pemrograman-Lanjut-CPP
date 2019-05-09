#include <iostream>
#include <stdexcept>
using namespace std;

class DivideByZeroException:public runtime_error{
public:
  DivideByZeroException():runtime_error("attemped to divide by zero"){}
};
