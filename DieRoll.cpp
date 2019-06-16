// link to problem : http://codeforces.com/contest/9/problem/A
#include <iostream>
using namespace std;

int main(){

  int Y, W;
  cin>>Y>>W;

  int DotsChances = (7-max(Y,W));


  switch (DotsChances) {
    case 0:
      cout<<"0/1";
      break;
    case 1:
      cout<<"1/6";
      break;
    case 2:
      cout<<"1/3";
      break;
    case 3:
      cout<<"1/2";
      break;
    case 4:
      cout<<"2/3";
      break;
    case 5:
      cout<<"5/6";
      break;
    case 6:
      cout<<"1/1";
      break;
  }

  return 0;
}
