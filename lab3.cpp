#include<iostream>
using namespace std;

void alternateSplit(int* &a, int* &b, int* &c,int size){
  int j=0; int k = 0;
  int n2 = size/2;
  int n3 = size/2;
  if(size%2 != 0)n2++;

  b = new int[n2];
  c = new int[n3];

  for(int i=0; i<size; i++){
    if(i%2 != 0){
      b[j] = a[i];
      j++;
    }else{
      c[k] = a[i];
      k++;
    }
  }


  for(int i=0; i<size/2; i++)cout<<b[i];
}

int main(){
  int size=4;

  int* test = new int[size];
  int* b = new int[size/2];
  int* c = new int[size/2];
  for(int i=0; i<size; i++){
    cin>>test[i];
  }
  alternateSplit(test,b,c, 4);

  return 0;
}
