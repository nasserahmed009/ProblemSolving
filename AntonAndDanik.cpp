#include <iostream>
using namespace std;


int main(){

  int n;
  int anton = 0, danik = 0;
  string results;

  cin>>n;
  cin>>results;

  for(int i=0; i< results.length(); i++){
    if(results[i] == 'A') anton++;
    if(results[i] == 'D') danik++;
  }

  if(anton>danik) cout<<"Anton";
  else if(anton<danik) cout<<"Danik";
  else cout<<"Friendship";

  return 0;

}
