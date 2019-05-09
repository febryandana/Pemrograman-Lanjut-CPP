#include <iostream>
#include <stdexcept>
using namespace std;
class LogicError:public logic_error{
 LogicError() :logic_error("Logical error"){
 }
};
