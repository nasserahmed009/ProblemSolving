// link to problem : http://codeforces.com/contest/265/problem/A
#include <iostream>
using namespace std;

int main(){


  string stonesColors, instructions;
  int lissPosition = 1;
  cin>>stonesColors>>instructions;

  for(int i=0; i<instructions.length(); i++){
    if(instructions[i] == stonesColors[lissPosition-1]) lissPosition++;
  }

  cout<<lissPosition;
  return 0;

}
