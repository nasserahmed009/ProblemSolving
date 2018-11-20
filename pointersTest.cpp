#include <iostream>
using namespace std;

void crab(int* arr){
  arr[0] = arr[0]+5;
}


int main(){


  int arr[3] = {1,2,3};
  int* test = arr;
  crab(test);

  cout<<arr[0];

}
