#include <iostream>
#include "course.h"

using namespace std;
course::course()
{
    //ctor
}

void course::setTitle(char* x){
    title = x;
}
void course::setCode(int x){
    code = x;
}

char* course::getTitle(){
    return title;
}
int course::getCode(){
    return code;
}

void course::printInfo(){
    cout<<"Title : "<<this->title<<endl;
    cout<<"Code : "<<this->code<<endl;
}
