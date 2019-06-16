// link to problem : http://codeforces.com/contest/228/problem/A
#include <iostream>
using namespace std;

int main(){

  int distinctColors = 0;
  int colors[4];

  for(int i=0; i<4; i++) cin>>colors[i];

  for(int i=0; i<4; i++){
    int j=0;
    for(j=0; j<4; j++){
      if(colors[i] == colors[j]) break;
    }
    if(i == j) distinctColors++;
  }

  cout<<4-distinctColors;
  return 0;

}
