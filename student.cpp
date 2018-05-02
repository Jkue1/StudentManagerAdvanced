#include "student.h"
#include <string>
#include <iostream>

using namespace std;

void student::setName(string first, string last)
{
    firstname = first;
    lastname = last;
}

string student::fullName()
{
    string name;
    name.append(firstname);
    name.append(" ");
    name.append(lastname);
    return name;
}

void student::addGrade(double &num)
{
    number = num;
}

double student::getScore()
{
    double scored;
    total = total+number;
    scored = total-10;
    return scored;
}


