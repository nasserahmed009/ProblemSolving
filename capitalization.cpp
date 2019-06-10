#include <iostream>
using namespace std;

void capitalize(string &s){
    if(s[0] >= 97 && s[0] <=122) s[0]-=32;
}

int main(){

  string s;
  cin>>s;

  capitalize(s);

  cout<<s;

  return 0;

}
