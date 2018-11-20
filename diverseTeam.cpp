#include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <stdlib.h>
using namespace std;


int main(){
  int stdNum, teamNum, distinctNumbers=1;
  cin>>stdNum>>teamNum;

  int scores[stdNum];
  int indices[teamNum];
  int z=0;
  for(int i=0; i<stdNum; i++){
    cin>>scores[i];
  }

  for(int i=0; i<stdNum;i++){
    int j;

    for(j=0; j<i; j++){
      if( scores[i] == scores[j] ){
        break;
      }
    }
    if( i == j ){
      distinctNumbers++;
      indices[z] = i+1;
      z++;
    }
  }

  if(distinctNumbers >= teamNum ){
    cout<<"YES"<<endl;
    for(int i=0; i<teamNum; i++){
      cout<<indices[i]<<" ";
    }
  }else{
    cout<<"NO";
  }





  return 0;
}
