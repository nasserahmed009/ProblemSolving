#include <iostream>
#include "teacher.h"
#include "course.h"
using namespace std;

teacher::teacher(char* x,char* y,char* z)
{
    ID = x;
    name = y;
    lastCertificate = z;
}

void teacher::setID(char* x){
    ID = x;
}
char* teacher::getID(){
    return ID;
}

void teacher::setName(char* x){
    name = x;
}
char* teacher::getName(){
    return name;
}


void teacher::setLastCertificate(char* x){
    lastCertificate = x;
}
char* teacher::getLastCertificate(){
    return lastCertificate;
}

void teacher::printInfo(){
    cout<<"ID : "<<ID<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Last certificate :"<<lastCertificate<<endl;
}

void teacher::addCourse(couese c1){

}
