#include<iostream>
using namespace std;
class makhluk{
public:
	void berkembang();
};

class hewan : public makhluk{
public:
	void bergerak();
};
class kuda : public hewan{
public:
	void berlari();
};

main(){
	makhluk mk; hewan hw; kuda kd;
	cout<<endl<<" Sifat-sifat dari Makhluk adalah : "<<endl;
	mk.berkembang();
	cout<<endl<<" Sifat-sifat dari Hewan adalah : "<<endl;
	hw.berkembang(); hw.bergerak();
	cout<<endl<<" Sifat-sifat dari Kuda adalah : "<<endl;
	mk.berkembang(); hw.bergerak(); kd.berlari();
}

void makhluk::berkembang(){
	cout<<" Berkembang biak"<<endl;
}

void hewan::bergerak(){
	cout<<" Bergerak berpindah tempat"<<endl;
}

void kuda::berlari(){
	cout<<" Berlari sangat kencang seperti angin"<<endl;
}
