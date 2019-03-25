//#include "stdafx.h"
#include "Student.h"

Student::Student(void)
    { }

void Student::setName(string newName){
    name = newName;
}

string Student::getName(){
    return name;
}

void Student::setMark(double newMark){
    privateSetMark(newMark);
    // if(newMark >= 0 && newMark <=100){
    //     mark = newMark;
    // }
    // else{
    //      cout << "Rentang nilai di luar 0-100" << endl;
    // }
}

double Student::getMark(){
    return mark;
}

Student::~Student(void)
{ }

void Student::privateSetMark(double privateNewMark){
    if(privateNewMark >= 0 && privateNewMark <=100){
        mark = privateNewMark;
    }
    else{
         cout << "Rentang nilai di luar 0-100" << endl;
    }
}
