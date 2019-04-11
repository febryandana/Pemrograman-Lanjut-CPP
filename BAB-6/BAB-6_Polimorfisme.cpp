#include<iostream>
using namespace std;

class Poligon {
protected:
    int lebar, tinggi;
public:
    void setNilai (int a, int b){
        lebar=a; tinggi=b;
    }
    virtual int luas(){
        return lebar * tinggi;
    }
};

class Persegi: public Poligon {
public:
    int luas (){
        return lebar * tinggi;
    }
};

class Segitiga: public Poligon {
public:
    int luas (){
        return (lebar * tinggi / 2);
    }
};

int main () {
    Persegi psgi;
    Segitiga segi3;
    Poligon poli;
    Poligon *pPoli1 = &psgi;
    Poligon *pPoli2 = &segi3;
    Poligon *pPoli3 = &poli;
    pPoli1->setNilai (4,5);
    pPoli2->setNilai (4,5);
    pPoli3->setNilai (4,5);
    cout << pPoli1->luas() << endl;
    cout << pPoli2->luas() << endl;
    cout << pPoli3->luas() << endl;
    return 0;
}


