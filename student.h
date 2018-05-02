

#ifndef _STUDENT_H_
#define _STUDENT_H_ 
#include <string>

using namespace std;

class student
{
    public:
    void setName(string,string);
    void addGrade(double&);
    double getScore();
    string fullName();

    private:
    string firstname;
    string lastname;
    double number;
    double total;
};

#endif
