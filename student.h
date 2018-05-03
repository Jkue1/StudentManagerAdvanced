

#ifndef _STUDENT_H_
#define _STUDENT_H_ 
#include <string>
#include <vector>
using namespace std;

class student
{
    public:
    void setName(string,string);
    void addGrade(double);
    double getScore();
    string fullName();

    private:
    string firstname;
    string lastname;
    double number;
    vector<double> grid;  
};

#endif
