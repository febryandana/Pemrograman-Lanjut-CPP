#include<iostream>
using namespace std;
class kuda{
public :
	void berlari(){
		cout<<" > Berlarinya sangat cepat"<<endl;
	}
};

class burung{
public:
	void terbang(){
		cout<<" > Terbang menembus awan"<<endl;
	}
};

class pegasus: public kuda, public burung{
public:
	void lariterbang(){
		cout<<" > Bersayap, lari dan dapat terbang ke angkasa"<<endl;
	}
};

main(){
	pegasus pg;
	cout<<"Sifat dari PEGASUS yaitu : "<<endl;
	pg.berlari();
	pg.terbang();
	pg.lariterbang();
}
