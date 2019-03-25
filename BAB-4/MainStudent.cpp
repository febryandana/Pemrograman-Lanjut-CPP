//#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;

#include "Student.cpp"    // #include "Student.h"


int main(){
    Student siswa1;
    siswa1.setName("Rahmat");
    siswa1.setMark(200);
    // siswa1.name = "Rahmat";
    // siswa1.mark = 200;

    cout<<"Siswa dengan nama "<<siswa1.getName();
    cout<<" mendapat nilai "<<siswa1.getMark();
    // cout<<"Siswa dengan nama "<<siswa1.name;
    // cout<<" mendapat nilai "<<siswa1.mark;

    cin.get();
}

// Student siswa;


// return 0;
