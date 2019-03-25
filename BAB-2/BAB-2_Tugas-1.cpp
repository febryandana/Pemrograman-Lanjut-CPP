#include <iostream>
using namespace std;
class Convert{
private:
    int out1, out2;
    int bilangan[13]={0,1,2,3,4,5,6,7,8,9,10,11,100};
    string huruf[13]={"nol","satu","dua","tiga","empat","lima","enam","tujuh","delapan","sembilan","sepuluh","sebelas","seratus"};
    string khusus[2]={"belas","puluh"};
public:
    void overloadingMeth(int input){
        int puluhan, satuan;
        if(input > -1 && input < 12){
            cout << huruf[input] << endl;}
        else if(input > 11 && input <20){
            cout << huruf[input - 10] << khusus[0] << endl;}
        else if(input > 20 && input < 100){
            puluhan = (input-(input%10))/10;
            satuan = input%10;
            cout << huruf[puluhan] << " " << khusus[2] << " " << huruf[satuan] << endl;}
        else if(input == 100){
            cout << huruf[12] << endl;}
        else{
            cout << "Maaf, masukan angka hanya pada range 0 sampai 100" << endl;}
    }
    void overloadingMeth(string input){
        string temp1, temp2, temp3;
        temp1 = input.substr(0, input.find(' '));
        temp2 = input.substr((input.find(' ')+1), 5);
        temp3 = input.substr(input.find_last_of(' ')+1);
        for(int i=0; i<13; i++){
            if(temp1 == huruf[i]){
                out1 = bilangan[i];}}
        for(int k=0; k<13; k++){
            if(temp3 == huruf[k]){
                out2 = bilangan[k];}}
        if(temp2 == "ratus"){
            cout << "Maaf, bilangan yang bisa dimasukkan hanya 0 sampai 100" << endl;}
        else if(temp2 == "puluh"){
            cout << out1 << out2 << endl;}
        else if(temp2 == "belas"){
            cout << "1" << out1 << endl;}
        else if(temp2 != ""){
            cout << out1 << endl;}
    }
};
int main(){
    Convert a;
    int input1, select;
    string input2;
    cout << "===== SIMPLE TEXT <-> NUMBER CONVERTER =====" << endl;
    cout << "============================================\n" << endl;
    cout << endl;
    cout << "=== CONVERT NUMBER TO TEXT ===" << endl;
    cout << "Input number (0-100) = ";
    cin >> input1;
    cout << "Text output = ";
    a.overloadingMeth(input1);
    cout << endl;
    cout << "=== CONVERT TEXT TO NUMBER ===" << endl;
    cout << "Input text (0-100) = ";
    cin.ignore();
    getline(cin, input2);
    cout << "Number output = ";
    a.overloadingMeth(input2);
    return 0;
}
