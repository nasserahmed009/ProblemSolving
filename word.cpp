#include <iostream>
using namespace std;

void lowercase(string &s){
  for(int i=0; i<s.length(); i++){
    if(s[i] >= 65 && s[i] <=90) s[i]+=32;
  }
}

void uppercase(string &s){
  for(int i=0; i<s.length(); i++){
    if(s[i] >= 97 && s[i] <=122) s[i]-=32;
  }
}

int mostUppercase(string &s){
    int u=0, l=0;
    for(int i=0; i<s.length(); i++){
      if(s[i] >= 65 && s[i] <=90) u++;
      else l++;
    }
    if(u>l) return 1;
    else return 0;
}

int main(){

  string s;
  cin>>s;

  if( mostUppercase(s) == 1) uppercase(s);
  else lowercase(s);

  cout<<s;

  return 0;

}
