#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {


    ifstream inFile;
    inFile.open("names.txt");

    string boys[5];
    string girls[5];
    string name;
    bool foundInGirls=false, foundInBoys = false;
    int i=0;

    if (inFile) {
      while (inFile >> boys[i] >> girls[i] ) {
          i++;
      }
      inFile.close();
      cout<<"Enter the name:";
      cin>>name;

      for(i=0;i<5;i++){
        if(boys[i]==name){
          cout<<"The number in boys = "<<i+1<<endl;
          foundInBoys=true;
        }
        if(girls[i]==name){
          cout<<"The number in girls = "<<i+1<<endl;
          foundInGirls =true;
        }
      }

      if(!foundInBoys)cout<<"Not found in boys"<<endl;
      if(!foundInGirls)cout<<"Not found in girls"<<endl;
    } else{
      cout << "Unable to open file";
      exit(1);
    }
    return 0;
  }
