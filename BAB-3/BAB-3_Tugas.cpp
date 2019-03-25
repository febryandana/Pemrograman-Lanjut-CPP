#include <iostream>
using namespace std;
class Atm{
private:
    int kodePin, saldo, sTransfer, sTarik;
    string rekUser;
public:
    int pilih;
    Atm(){
        kodePin = 321612;
        saldo = 10000000;
        rekUser = "12345678910";
    }
    int getSaldo(){
        return saldo;
    }
    void tarik(int trk){
        if(trk%100000 == 0){
            cout << "Anda telah menarik uang sebesar " << trk << endl;
            saldo = saldo - trk;
        }else{
            cout << "Maaf, ATM ini hanya bisa menarik uang dengan kelipatan Rp 100.000,00" << endl;}
    }
    void transfer(string rek, int trf, string brt){
        cout << "|-------------------------------------|" << endl;
        cout << "       BERITA TRANSFER" << endl;
        cout << "Dari Rekening  : " << rekUser << endl;
        cout << "Rek. Tujuan    : " << rek << endl;
        cout << "Nominal        : " << trf << endl;
        cout << "Berita         : " << brt << endl;
        cout << "Transfer?(1/0) : ";
        cin >> pilih;
        if(pilih == 1){
            cout << "=== Transfer Berhasil ===" << endl;
            saldo = saldo - trf;
        }else{
            cout << "=== Transfer Batal ===" << endl;}
    }
    int getPIN(){
        return kodePin;}
};
int main(){
    int pin, i=0, pilih, nom;
    bool a=true;
    string berita, rekening;
    Atm s1;
    cout << "======================================" << endl;
    cout << "||                                  ||" << endl;
    cout << "|| Selamat datang di ATM BANK HUBLA ||" << endl;
    cout << "||                                  ||" << endl;
    cout << "======================================" << endl;
    cout << "Masukkan PIN Anda" << endl;
    do{
        cout << "PIN : ";
        cin >> pin;
        if(pin == s1.getPIN()){
            break;
        }else{
            cout << "PIN Salah" << endl;
            i++;}
    }while(i<3);
    if(i == 3){
        cout << "|||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
        cout << "||  ANDA SALAH MEMASUKKAN PIN SEBANYAK 3 KALI  ||" << endl;
        cout << "||    KARTU ATM ANDA SEKARANG AKAN DIBLOKIR    ||" << endl;
        cout << "|||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
        return 0;
    }
    system("clear||cls");
    do{
    cout << endl;
    cout << "=======================================" << endl;
    cout << "||          MENU ATM HUBLA           ||" << endl;
    cout << "||-----------------------------------||" << endl;
    cout << "|| 1. CEK SALDO                      ||" << endl;
    cout << "|| 2. TARIK TUNAI                    ||" << endl;
    cout << "|| 3. TRANSFER                       ||" << endl;
    cout << "|| 4. KELUAR                         ||" << endl;
    cout << "=======================================" << endl << endl;
    cout << "Pilih menu : ";
    cin >> pilih;
    switch(pilih){
    case 1:
        cout << "=======================================" << endl;
        cout << "|               CEK SALDO             |" << endl;
        cout << "|-------------------------------------|" << endl;
        cout << "Saldo Anda sekarang sebesar : " << s1.getSaldo() << endl;
        cout << "=======================================" << endl;
        break;
    case 2:
        cout << "=======================================" << endl;
        cout << "|              TARIK TUNAI            |" << endl;
        cout << "|-------------------------------------|" << endl;
        cout << "| Hanya untuk kelipatan Rp 100.000,00 |" << endl;
        cout << "|-------------------------------------|" << endl;
        cout << "Masukkan nominal uang : ";
        cin >> nom;
        s1.tarik(nom);
        cout << "Sisa saldo Anda sebesar : " << s1.getSaldo() << endl;
        cout << "=======================================" << endl;
        break;
    case 3:
        cout << "=======================================" << endl;
        cout << "|               TRANSFER              |" << endl;
        cout << "|-------------------------------------|" << endl;
        cout << "Rek. Tujuan    : ";
        cin >> rekening;
        cout << "Nominal uang   : ";
        cin >> nom;
        cout << "Berita         : ";
        cin >> berita;
        if(nom < s1.getSaldo()){
            s1.transfer(rekening, nom, berita);
            cout << "Sisa saldo Anda sebesar : " << s1.getSaldo() << endl;
        }else{
            cout << "Nominal uang terlalu besar" << endl;}
        cout << "=======================================" << endl;
        break;
    case 4:
        return 0;
    default:
        a=true;}
    }while(a==true);
}
