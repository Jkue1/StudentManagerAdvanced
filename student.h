

#ifndef _STUDENT_H_
#define _STUDENT_H_ 
#include <string>

using namespace std;

class student
{
    public:
    void setName(string,string);
    void addGrade(int);
    void getScore();
    void fullName();
    private:
    string first;
    string last;
};

#endif
