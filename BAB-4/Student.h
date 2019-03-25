#include <iostream>
#include <string>

using namespace std;

#pragma once
class Student
{
public:
    Student(void);
    void setName(string newName);
    string getName();
    void setMark(double newMark);
    double getMark();
    ~Student(void);
private:
    string name;
    double mark;
void privateSetMark(double privateNewMark);
};

// Student();
// ~Student();
