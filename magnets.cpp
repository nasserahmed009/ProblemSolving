// link to problem : https://codeforces.com/contest/344/problem/A

#include <iostream>
using namespace std;

int main(){
  int groupsNum=1, magnetsNum;
  cin>>magnetsNum;
  int* arrangments = new int[magnetsNum];
  for(int i=0; i<magnetsNum; i++){
    cin>>arrangments[i];
  }

  for(int i=1; i<magnetsNum; i++){
    if(arrangments[i-1] != arrangments[i]) groupsNum++;
  }
  cout<<groupsNum;
}
