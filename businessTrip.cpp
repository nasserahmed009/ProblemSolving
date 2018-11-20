#include <iostream>
using namespace std;

int main(){

  int height,swap;
  int months[12];
  int ans=0;
  int sum=0;
  cin>>height;
  for(int i=0; i<12; i++) cin>>months[i];
  //ordering the array
  for(int i=0; i<11; i++){
    for(int d=0; d<11-i; d++){
      if( months[d] < months[d+1] ){
        swap       = months[d];
        months[d]   = months[d+1];
        months[d+1] = swap;
      }
    }
  }

  for(int i=0; i<12; i++){
    sum+=months[i];
    ans++;
    if(sum>=height){
      break;
    }
  }

  // if(height == 0){cout<<0;}else{cout<<ans;}
  if(height == 0){
    cout<<0;
  }else if( sum >= height && height != 0){
    cout<<ans;
  }else if(sum < height){
    cout<<-1;
  }


  return 0;
}
