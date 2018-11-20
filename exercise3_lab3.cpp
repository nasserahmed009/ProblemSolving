#include <iostream>
using namespace std;

void getConsElementsDivision(int* arr, int size, float* newArr, int newSize);

int main(){
  int size;
  cin>>size;

  if (size%2 != 0){
    cout<<"Invalid";
    return 0;
  }

  int* arr = new int[size];
  for( int i=0; i<size; i++){
    cin>>arr[i];
  }
  int newSize = size/2;
  float* newArr = new float[newSize];

  getConsElementsDivision(arr, size, newArr, newSize);

    for(int i=0; i<newSize; i++){
      cout<<newArr[i]<< " ";
    }

  return 0;
}


void getConsElementsDivision(int* arr, int size, float* newArr, int newSize){

    // newSize=0;
    int j=0;
    for(int i=0; i<size; i+=2){
      newArr[j] = (arr[i]*1.0)/arr[i+1];
      j++;
    }


}
