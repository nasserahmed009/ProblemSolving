#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
  int arr[5][5];

  int x,y;
  int stepsX, stepsY, stepsTot;
  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      cin>>arr[i][j];
      if( arr[i][j] == 1){
          x=i;
          y=j;
      }
    }
  }

  stepsX = abs(x-2);
  stepsY = abs(y-2);
  stepsTot = stepsX + stepsY;

  cout<<stepsTot<<endl;
  return 0;
}
