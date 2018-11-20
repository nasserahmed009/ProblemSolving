#include <iostream>
#include <string>
using namespace std;

int main()
{
    string numberTxt;
    bool lucky=true;
    cin>>numberTxt;
    int numberInt = stoi(numberTxt);

    for(int i=0; i<numberTxt.length(); i++){
        if((numberTxt[i] != '4')&&(numberTxt[i] != '7')){
            lucky = false;
            break;
        }
    }

    if(lucky || (numberInt%4 == 0) || (numberInt%7 == 0) || (numberInt%47 == 0) || (numberInt%74 == 0) || (numberInt%447 == 0) || (numberInt%474 == 0) || (numberInt%744 == 0) || (numberInt%747 == 0)|| (numberInt%774 == 0) || (numberInt%477 == 0)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }


    return 0;
}
