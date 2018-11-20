#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int cups[3], medals[3];
  float cupsNum=0;
  float medalsNum=0;
  int n;

  for(int i=0; i<3; i++){
    cin>>cups[i];
    cupsNum += cups[i];
  }
  for(int i=0; i<3; i++){
    cin>>medals[i];
    medalsNum += medals[i];
  }
  cin>>n;
  int cupsShelves = ceil( cupsNum / 5 );
  int medalsShelves = ceil( medalsNum / 10 );

  if(n >= (cupsShelves + medalsShelves) ){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
  
  return 0;
}
