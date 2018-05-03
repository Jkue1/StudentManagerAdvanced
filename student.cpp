#include "student.h"
#include <string>
#include <iostream>
#include <vector>
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
    grid.push_back(num);
  
}

double student::getScore()
{
    double total=0.0;
    for (int i=0; i < grid.size(); i++)
    {
        total = total+grid[i];
    }
    
    total = total/grid.size();
    
    
    return total;
}


