#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Kendaraan{
private:
	char nama[15];
public:
	Kendaraan(char *nama_kendaraan = "T1AS"){
		strcpy(nama, nama_kendaraan);
		cout<<" Hidupkan mesin kendaraan anda ..."<<endl;
	}
	~Kendaraan(){
		cout<<" Matikan mesin kendaraan anda ..."<<endl;
	}
	void info_kendaraan(){
		cout<<nama<<" Sedang berjalan ..."<<endl;
	}
};

class Mercy : public Kendaraan{
public:
	Mercy(char *nama_mercy) : Kendaraan(nama_mercy){
		cout<<" Hidupkan mesin mobil merah ..."<<endl;
	}
	~Mercy(){
		cout<<" Matikan mesin mobil merah itu ..."<<endl;
	}
};

int main(){
	//clrscr();
	Mercy mewah(" Mobil Yang Mewah");
	mewah.info_kendaraan();
	cout<<" Akhir dari permulaaan()..."<<endl;
}
