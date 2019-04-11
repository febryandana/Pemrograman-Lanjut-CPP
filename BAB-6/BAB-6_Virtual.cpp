#include<iostream>
using namespace std;

class Base {
public:
    void cetak ()
        { cout << "cetak dari base class" << endl; }
    virtual void cetakVirtual ()=0;
};

class Derived: public Base {
public:
    void cetak ()
        { cout << "cetak dari derived class" << endl; }
    void cetakVirtual ()
        { cout << "cetak virtual dari derived class" << endl; }
};

int main () {
    Base* b = new Base();
    //Base* bd = new Derived();
    Derived* d = new Derived();
    b->cetak();
    b->cetakVirtual();
    //bd->cetak();
    //bd->cetakVirtual();
    d->cetak();
    d->cetakVirtual();
    return 0;
}
