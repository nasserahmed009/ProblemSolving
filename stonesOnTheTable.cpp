#include <iostream>
using namespace std;

int main(){
  int number;
  string stones;
  cin>>number;
  cin>>stones;
  int answer = 0;
  for(int i=1; i<number; i++){
    if( stones[i] == stones[i-1] ){
      answer++;
    }
  }
  cout<<answer;
  return 0;
}
