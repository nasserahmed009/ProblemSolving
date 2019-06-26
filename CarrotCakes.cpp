// link to problem : http://codeforces.com/contest/799/problem/A
#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n, t, k, d;
  cin>>n>>t>>k>>d;

  int timesAll = ceil(n/float(k));
  int oven1Time = 0;
  int oven2Time = d;

  for(int i=0; i<timesAll; i++){
    if(oven1Time<=oven2Time) oven1Time+=t;
    else oven2Time+=t;
  }

  if(max(oven1Time, oven2Time)< timesAll*t) cout<<"YES";
  else cout<<"NO";
  return 0;
}
