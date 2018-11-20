#include <iostream>
using namespace std;

bool isGrowing(int arr[],int n){
  for(int i=1; i<n; i++){
    if((arr[i] < arr[i-1])){
      return false;
    }
  }
  return true;
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  int largestValue = 0;
  int lastElement;

  for(int i=0; i<n; i++){
    cin>>arr[i];
    if(arr[i]>largestValue){
      largestValue = arr[i];
    }
    if(arr[i]<0){
      lastElement = i;
      break;
    }
  }

  if( isGrowing(arr, lastElement) ){
    cout<<"Input values are in growing order"<<endl;
    cout<<"largest Value = "<<largestValue;
  }else{
    cout<<"Input values are NOT in growing order"<<endl;
    cout<<"largest Value = "<<largestValue;
  }
}
