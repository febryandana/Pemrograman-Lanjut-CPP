#include<iostream>
using namespace std;
class hewan{
public:
	void bergerak(){
		cout<<" # Bergerak berpindah tempat"<<endl;
	}
};
class kuda: virtual public hewan{
public :
	void berlari(){
		cout<<" # Berlarinya sangat cepat"<<endl;
	}
};

class burung: virtual public hewan{
public:
	void terbang(){
		cout<<" # Terbang menembus awan"<<endl;
	}
};

class pegasus: public kuda, public burung{
public:
	void lariterbang(){
		cout<<"# Bersayap, lari dan dapat terbang ke angkasa"<<endl;
	}
};

main(){
	pegasus pg;
	cout<<">> Sifat dari PEGASUS << "<<endl;
	cout<<"========================"<<endl;
	pg.bergerak();
	pg.berlari();
	pg.terbang();
	pg.lariterbang();
}
