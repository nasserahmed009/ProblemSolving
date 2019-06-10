// link to problem : https://codeforces.com/contest/381/problem/A

#include <iostream>
using namespace std;

int main(){
  int cardsNum, SerejaScore = 0, DimaScore =  0;
  cin>>cardsNum;

  int* cardsValues = new int[cardsNum];
  for(int i=0; i<cardsNum; i++){
    cin>>cardsValues[i];
  }

  int start = 0, end = cardsNum-1, i=0;

  while(cardsNum != 0){
    if(i%2 == 0){ // Sereja's turn

      if(cardsValues[start] > cardsValues[end]){
        SerejaScore += cardsValues[start];
        start++;
      }else{
        SerejaScore += cardsValues[end];
        end--;
      }

    }else{ // Dima's turn

      if(cardsValues[start] > cardsValues[end]){
        DimaScore += cardsValues[start];
        start++;
      }else{
        DimaScore += cardsValues[end];
        end--;
      }

    }

    cardsNum--;
    i++;
  }

  cout<<SerejaScore<<" "<<DimaScore;
}
