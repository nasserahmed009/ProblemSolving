#include <iostream>
using namespace std;

void lowercase(string &s){
  for(int i=0; i<s.length(); i++){
    if(s[i] >= 65 && s[i] <=90) s[i]+=32;
  }
}


int compare(string s1, string s2, int n){
  for(int i=0; i<n; i++){
    if(s1[i] > s2[i]) return 1;
    else if(s1[i] < s2[i]) return -1;
  }
  return 0;
}

int main(){

  string s1,s2;
  cin>>s1>>s2;

  lowercase(s1);
  lowercase(s2);

  cout<<compare(s1,s2, s1.length());

  return 0;

}
