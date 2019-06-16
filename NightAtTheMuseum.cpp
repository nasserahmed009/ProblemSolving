// link to problem : http://codeforces.com/contest/731/problem/A

#include <iostream>
using namespace std;


int main(){

  char characters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  int start = 0, steps=0;
  string name;
  cin>>name;

  for(int i=0; i<name.length(); i++){
    for(int j=0; j<26; j++){
      if(name[i] == characters[j]){

        int walk = abs(start-j);
        if(walk<13){
          steps += walk;
        }else{
          steps += 26 - walk;
        }
        start = j;
        break;
      }
    }
  }

  cout<<steps;

}
