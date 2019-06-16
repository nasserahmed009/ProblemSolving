// link to problem : http://codeforces.com/contest/732/problem/A
#include <iostream>
using namespace std;

int main(){


  int shovelPrice, r, minShovelNum = 1;
  bool minNumFound = false;
  cin>>shovelPrice;
  cin>>r;

  while(!minNumFound){
    int totalPrice = minShovelNum * shovelPrice;
    if(totalPrice%10 == 0 || (totalPrice-r)%10 ==0) break;
    minShovelNum++;
  }

  cout<<minShovelNum;

  return 0;

}
