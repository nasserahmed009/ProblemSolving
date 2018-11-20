#include<iostream>
using namespace std;

int main(){

  int x=25;
  int* pointer = &x;

  cout<<"Memory Adress : "<<pointer<<endl;
  cout<<"Actual Value : "<<*pointer<<endl;

  return 0;
}
