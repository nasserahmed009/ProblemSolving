#ifndef COURSE_H
#define COURSE_H
#include <iostream>
using namespace std;
class course
{
    private:
        char* title;
        int code;
    public:
        course();
        void setTitle(char* x);
        char* getTitle();
        void setCode(int x);
        int getCode();
        void printInfo();


};

#endif // COURSE_H
