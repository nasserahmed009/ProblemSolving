#include <iostream>
using namespace std;

int main(){
  int number;
  bool hard=false;

  cin>>number;

  int opinions[number];
  for(int i=0; i<number; i++){
    cin>>opinions[i];

    if(opinions[i] == 1){
      hard = true;
      cout<<"HARD"<<endl;
      break;
    }
  }

  if(hard != true){
    cout<<"EASY"<<endl;
  }

  return 0;
}
