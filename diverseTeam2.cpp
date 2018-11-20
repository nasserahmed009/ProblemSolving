#include<iostream>
#include<string>
using namespace std;

int main(){
  int n , k , i;
  cin >> n >> k;

  int Arr[n] , freq[100] , last[100] ;

for ( i = 1; i<=n; i++ ) {
  freq[i] = 0 ;
  last[i] = 0 ;
}




for (i = 1 ; i<=n; i++ ) {
  cin>>Arr[i];
  freq[Arr[i]]++ ;
  last[Arr[i]] = i ;
}

for(i=1; i<=100; i++){
    cout<<Arr[i]<<" ";
}
cout<<endl;
for(i=1; i<=100; i++){
    cout<<freq[i]<<" ";
}
cout<<endl;
for(i=1; i<=100;i++){
    cout<<last[i]<<" ";
}


  return 0;
}
