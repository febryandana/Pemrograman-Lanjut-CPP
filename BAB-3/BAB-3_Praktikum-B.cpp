#include <iostream>
using namespace std;
class Rasional {
private:
    int pembilang, penyebut;
public:
    Rasional();
    Rasional(int pembilang, int penyebut);
    bool isRasional();
    void sederhana();
    double cast();
    bool lebihDari(Rasional r);
    void negasi();
    void unaryPlus(Rasional r);
    void cetak();
};
Rasional::Rasional() {
    pembilang = 0;
    penyebut = 0;
}
Rasional::Rasional(int pembilang, int penyebut) {
    this->pembilang = pembilang;
    this->penyebut = penyebut;
}
// mengecek suatu bilangan merupakan rasional atau bukan
bool Rasional::isRasional() {
    return (penyebut != 0);
}
// menyederhanakan bilangan rasional
void Rasional::sederhana() {
    int temp, a, b;
    if (penyebut == 0) {
        return;
    }
    a = (pembilang < penyebut)? penyebut : pembilang;
    b = (pembilang < penyebut)? pembilang : penyebut;
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    pembilang /= a;
    penyebut /= a;
}
double Rasional::cast() {
    return (penyebut == 0.0) ? 0.0 :
    static_cast<double>(pembilang)/ static_cast<double>(penyebut);
}
// operator >
bool Rasional::lebihDari(Rasional r) {
    return (pembilang * r.penyebut) > (penyebut * r.pembilang);
}
// operator A = -A
void Rasional::negasi() {
    pembilang = - pembilang;
}
// operator unary +=
void Rasional::unaryPlus(Rasional r) {
    pembilang = (pembilang * r.penyebut) + (penyebut * r.pembilang);
    penyebut *= r.penyebut;
}
void Rasional::cetak() {
    cout << pembilang << "/" << penyebut << endl;
}

int main() {
    Rasional r1(2, 4);
    Rasional r2(5, 15);
    cout << "r1.isRasional: " << r1.isRasional() << endl;
    cout << "r2.isRasional: " << r2.isRasional() << endl;
    cout << endl;
    cout << "r1 > r2 : " << r1.lebihDari(r2) << endl;
    cout << endl;
    cout << "r1: ";
    r1.cetak();
    cout << "r2: ";
    r2.cetak();
    cout << endl;
    r1.sederhana();
    r2.sederhana();
    cout << "Hasil dari penyederhanaan adalah " << endl;
    cout << "r1: ";
    r1.cetak();
    cout << "r2: ";
    r2.cetak();
    cout << endl;
    cout << "Setelah dilakukan Cast ke double menjadi " << endl;
    cout << "r1: " << r1.cast() << endl;
    cout << "r2: " << r2.cast() << endl;
    cout << endl;
    r1.negasi();
    cout << "Negasi dari r1: ";
    r1.cetak();
    cout << endl;
    r1.unaryPlus(r2);
    cout << "Nilai dari r1 += r2: ";
    r1.cetak();
}
