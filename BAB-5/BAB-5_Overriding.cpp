#include<iostream>
#include<windows.h>
using namespace std;
class OvrRide {
private : int nilai1 , nilai2;
public : void Input(int a, int b) {
	nilai1 = a;
	nilai2 = b;
	}
public : virtual void show(){
	int hasil = nilai1 + nilai2;
	cout << "Override 1" << endl;
	cout << "Hasil penjumlahan " << nilai1 << " dan " << nilai2 << " = " << hasil;
	cout << endl;cout << endl;
	}
};

class Ride : public OvrRide {
public : void show(){
	int hasil = nilai1 + nilai2;
	cout << "Override 2" << endl;
	cout << "Hasil penjumlahan " << nilai1 << " dan " << nilai2 << " = " << hasil;
	cout << endl;cout << endl;
	}
};

int main(int argc, char *argv[]){
	OvrRide over;
	Ride ride;
	over.Input(3, 4);
	over.show();
	ride.Input(5, 6);
	ride.show();
	system("PAUSE");
	return EXIT_SUCCESS;
}
