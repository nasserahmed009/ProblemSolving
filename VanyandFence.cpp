#include <iostream>
using namespace std;

int main(){

  int n, h;
  cin>>n>>h;
  int width = n;
  int heights[n];
  for(int i=0; i<n; i++)cin>>heights[i];
  for(int i=0; i<n; i++){
    if(heights[i] > h) width++;
  }
  cout<<width<<endl;
  return 0;
}
