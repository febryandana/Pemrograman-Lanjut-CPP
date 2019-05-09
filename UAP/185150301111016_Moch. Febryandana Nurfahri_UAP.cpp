#include <iostream>
using namespace std;

class Avatar{
protected:
  string nama;
  int hp = 200;
public:
  void lifeStatus(){
    if(hp > 0){
      cout << "Sisa HP : " << hp << endl;
    }else{
      cout << "Karakter Mati" << endl;
    }
  }

  static void theWinner(){

  }

  virtual void Serang(string target, int ap)=0;
};

class PengendaliAir:public Avatar{
public:
  string Character = "air";
  void Serang(string target, int ap){
    if(target.Character=="api"){
      Zuko.hp = Zuko.hp - ap;
    }
    else if(target.Character=="tanah"){
      target.hp = target.hp - (0.5 * ap);
    }
    else if(target.Character=="udara"){
      hp = hp - ap;
    }
  }
};

class PengendaliBumi:public Avatar{
public:
  string Character = "bumi";
  void Serang(string target, int ap){
    if(target.Character=="api"){
      target.hp = target.hp - ap;
    }
    else if(target.Character=="udara"){
      target.hp = target.hp - ap;
    }
    else if(target.Character=="air"){
      hp = hp - target.ap;
    }
  }
};

class PengendaliApi:public Avatar{
public:
  string Character = "api";
  void Serang(string target, int ap){
    if(target.Character=="udara"){
      target.hp = target.hp - (2 * ap);
    }
    else if(target.Character=="tanah"){
      target.hp = target.hp - (0.5 * ap);
    }
    else if(target.Character=="air"){
      hp = hp - ap;
    }
  }
};

class PengendaliUdara:public Avatar{
public:
  string Character = "udara";
  void Serang(string target, int ap){
    if(target.Character=="air"){
      target.hp = target.hp - ap;
    }
    else if(target.Character=="tanah"){
      target.hp = target.hp - (0.2 * ap);
    }
    else if(target.Character=="api"){
      hp = hp - (2 * ap);
    }
  }
};

int main(){
  PengendaliUdara Aang;
  PengendaliAir Katara;
  PengendaliBumi Toph;
  PengendaliApi Zuko;

  Aang.Serang(Toph,12);
  Katara.Serang(Zuko, 15);
  Toph.Serang(Zuko, 20);
  Zuko.Serang(Aang, 35);
  Aang.Serang(Katara, 70);
  Katara.Serang(Toph, 60);
  Toph.Serang(Katara, 100);
  Zuko.Serang(Toph, 120);
  Aang.Serang(Zuko,90);
  Katara.Serang(Aang, 100);
  Toph.Serang(Aang, 110);
  Zuko.Serang(Katara, 200);

  Aang.lifeStatus();
  Katara.lifeStatus();
  Toph.lifeStatus();
  Zuko.lifeStatus();

  return 0;
}
