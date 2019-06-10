// link to problem : http://codeforces.com/contest/431/problem/A

#include <iostream>
using namespace std;

int main(){
  string S;
  int a1, a2, a3, a4, calories = 0;

  cin>>a1;
  cin>>a2;
  cin>>a3;
  cin>>a4;
  cin>>S;

  for(int i=0; i< S.length(); i++){
    switch (S[i]) {
      case '1':
        calories+=a1;
        break;
      case '2':
        calories+=a2;
        break;
      case '3':
        calories+=a3;
        break;
      case '4':
        calories+=a4;
        break;
      default:
        calories+=0;
        break;
    }
  }
  
  cout<<calories;
}
