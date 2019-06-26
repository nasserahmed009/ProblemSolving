// link to problem : http://codeforces.com/contest/294/problem/A
#include <iostream>
using namespace std;

int main(){

  int numberOfWires;
  cin>>numberOfWires;

  int* numberOfBirds = new int[numberOfWires];
  for(int i=0; i<numberOfWires; i++) cin>>numberOfBirds[i];

  int numberOfHuntedBirds;
  cin>>numberOfHuntedBirds;

  struct shoot {
    int wire;
    int position;
  };

  shoot* shoots = new shoot[numberOfHuntedBirds];
  for(int i=0; i<numberOfHuntedBirds; i++){
    cin>>shoots[i].wire>>shoots[i].position;
  }


  // for each shoot
  for(int i=0; i<numberOfHuntedBirds; i++){
    int currentWire = shoots[i].wire-1;
    int right, left;



    if(currentWire!=0){
      left = shoots[i].position - 1;
      numberOfBirds[ currentWire-1 ] += left;
    }

    if(currentWire!=numberOfWires-1){
      right = numberOfBirds[ currentWire ] - shoots[i].position;
      numberOfBirds[ currentWire+1 ] += right;
    }

    numberOfBirds[ currentWire ] = 0;


  }

  for(int i=0; i<numberOfWires; i++) cout<<numberOfBirds[i]<<endl;
  return 0;
}
