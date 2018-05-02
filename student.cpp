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

void student::addGrade(double num)
{
    number = num;
    total = total+number;
}

double student::getScore()
{
    return total;
}


