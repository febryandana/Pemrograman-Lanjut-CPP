#include <iostream>

using namespace std;

class Engine{
private:
    int power;
public:
    //int power;
    void setPower(int p){
        power = p;
    }
    int getPower(){
        return power;
    }
};

class Car{
private:
    Engine e;
    string company;
    string color;
public:
    //Engine e;
    //string company;
    //string color;

    void setEngine(Engine eng){
        e = eng;
    }

    void setCompany(string c){
        company = c;
    }
    void setColor(string cl){
        color = cl;
    }
    void show_details(){
        cout << "Company is: " << company << endl;
        cout << "Color is: " << color << endl;
        //cout << "Engine horse power is: " << e.power;
        cout << "Engine horse power is: " << e.getPower();
    }
};

int main(){
    Car c;
    Engine a;
    a.setPower(500);
    //c.e.power = 500;
    c.setEngine(a);
    //c.setEnginePower(500);
    //c.company = "Hyundai";
    c.setCompany("Hyundai");
    //c.color = "Black";
    c.setColor("Black");
    c.show_details();

    return 0;
}
