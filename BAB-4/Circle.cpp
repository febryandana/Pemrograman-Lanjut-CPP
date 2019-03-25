#include <iostream>
using  namespace std;
class Circle{
private:
    int rad;
    double phi=3.14, luas, keliling;
    void setLuas(int radius);
    void setKeliling(int radius);
public:
    Circle();
    ~Circle();
    void setRadius(int jari);
    double getLuas();
    double getKeliling();
};
Circle::Circle(){
    cout << "Menghitung Luas dan Keliling Lingkaran" << endl;
    cout << "======================================" << endl << endl;
}
void Circle::setRadius(int jari){
    rad = jari;
    setLuas(rad);
    setKeliling(rad);
}
void Circle::setLuas(int radius){
    luas = phi*(rad*rad);
}
void Circle::setKeliling(int radius){
    keliling = 2*phi*rad;
}
double Circle::getLuas(){
    return luas;
}
double Circle::getKeliling(){
    return keliling;
}
Circle::~Circle(){
    cout << endl << "Objek dihancurkan oleh destructor" << endl;
}
int main(){
    int r;
    Circle c1;
    cout << "Masukkan jari-jari lingkaran = ";
    cin >> r;
    c1.setRadius(r);
    cout << "Jari-jari lingkaran = " << r << endl;
    cout << "Luas Lingkaran = " << c1.getLuas() << endl;
    cout << "Keliling Lingkaran = " << c1.getKeliling() << endl;
    return 0;
}
