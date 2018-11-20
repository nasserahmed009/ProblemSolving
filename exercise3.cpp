#include <iostream>
using namespace std;


void MinMaxAvg(int* arr, int size,float &min,float &max,float &avg){
  float sum=0;
  for(int i=0; i<size; i++){
    if(arr[i]>max){
      max = arr[i];
    }
    sum = sum+arr[i];
  }
  min = max;
  for(int i=0; i<size; i++){
    if(arr[i]<min){
      min=arr[i];
    }
  }

  avg=(sum/size);
}
int main(){
  float max=0, min=0;
  float avg=0;
  int arraySize;
  cin>>arraySize;
  int numbers[arraySize];
  for(int i=0; i<arraySize; i++){
    cin>>numbers[i];
  }
  MinMaxAvg(numbers, arraySize, min, max, avg);
  cout<<"Maximum value : "<<max<<endl;
  cout<<"Minimum value : "<<min<<endl;
  cout<<"Average value : "<<avg<<endl;
  return 0;
}
