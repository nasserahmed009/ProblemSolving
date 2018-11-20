#include <iostream>
#include "course.h"
#include "teacher.h"
using namespace std;

int main()
{
    course c1;
    c1.setTitle("course one");
    c1.setCode(123);
    c1.printInfo();



    teacher t1("12","hamada el gamed","el deep web");
    t1.printInfo();
}

