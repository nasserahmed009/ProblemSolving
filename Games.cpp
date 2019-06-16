// link to problem : http://codeforces.com/contest/268/problem/A
#include <iostream>
using namespace std;

int main(){


  int numOfTeams, numGames = 0;
  cin>>numOfTeams;

  int* hostColors = new int[numOfTeams];
  int* guestsColors = new int[numOfTeams];

  for(int i=0; i<numOfTeams; i++){
    cin>>hostColors[i];
    cin>>guestsColors[i];
  }

  for(int i=0; i<numOfTeams; i++){
    for(int j=0; j<numOfTeams; j++){
      if(hostColors[i] == guestsColors[j]) numGames++;
    }
  }

  cout<<numGames;
  return 0;

}
