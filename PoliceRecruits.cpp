// link to problem : http://codeforces.com/contest/427/problem/A

#include <iostream>
using namespace std;

int main(){
  int eventsNum, officersNum=0, crimes=0, event;
  cin>>eventsNum;

  for(int i=0; i<eventsNum; i++){
    cin>>event;
    if(event > 0) officersNum+=event;
    else{
      if(officersNum == 0) crimes++;
      else officersNum--;
    }
  }

  cout<<crimes;
}
