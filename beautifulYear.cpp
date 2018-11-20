// Example program
#include <iostream>
#include <string>
using namespace std;

bool isDistinct(string x){
    unsigned distinctNumbers=0;
    for(unsigned i=0; i<x.length(); i++){
        unsigned j;
        for(j=0; j<i; j++){
                if(x[i] == x[j]){
                        break;
                    }
            }
        if( i == j){
                distinctNumbers++;
            }
        }
    if(distinctNumbers == x.length()){return true;} else{return false;}
    }

int main()
{
  int yearNumber;
  string yearText;

  cin>>yearNumber;

  yearText = to_string(yearNumber);
  do{
      yearNumber++;
        yearText = to_string(yearNumber);
      }
    while( isDistinct(yearText) == 0 );

   cout<<yearNumber<<endl;
}
