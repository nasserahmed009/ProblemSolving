#include <iostream>
#include <ctype.h>
#include <stdio.h>
using namespace std;

string upperCase(string text){
  for(int i=0; i<text.length(); i++){
    if(text[i]>90){
      text[i] = text[i]-32;
    }
  }
  return text;
}

int countLtr(char ltr, string word){
  int counter=0;
  for(int i=0; i<word.length(); i++){
    if( word[i] == ltr ){
      counter++;
    }
  }

  return counter;
}



int main(){
  char letter;
  string userword;
  cout<<"Enter the letter:";
  cin>>letter;
  cout<<"Enter the word:";
  cin>>userword;

  letter = toupper(letter);
  userword = upperCase(userword);
  cout<<countLtr(letter, userword)<<endl;

  return 0;
}
