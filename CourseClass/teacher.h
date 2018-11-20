#ifndef TEACHER_H
#define TEACHER_H
#include "course.h"
class teacher
{
    private:
        char* ID;
        char* name;
        char* lastCertificate;
        char* course;
    public:
        teacher(char* x, char* y, char* z);
        void setID(char* x);
        char* getID();

        void setName(char* x);
        char* getName();

        void setLastCertificate(char* x);
        char* getLastCertificate();

        void printInfo();

        void addCourse();
};

#endif // TEACHER_H
