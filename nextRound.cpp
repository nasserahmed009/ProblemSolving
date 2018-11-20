 #include <iostream>
using namespace std;

int main(){
  int playersNumber,position,score;

  cin>>playersNumber>>position;

  int players[playersNumber];

  int nextPlayers=0;

  for(int i=0; i<playersNumber; i++){
    cin>>players[i];
  }

  score = players[position-1];
  for(int i=0; i<playersNumber; i++){
    if( (players[i] >= score) && (players[i]>0) ){
      nextPlayers++;
    }
  }

  cout<<nextPlayers;
  return 0;
}
