#include<iostream>
using namespace std;
int main() {
    char ch;
    cin>> ch;
    if(ch>=65 && ch<=90)
    {
        cout<<"the character is in Capital letters";
    }
    else if(ch>=97 && ch<=122)
    {
        cout<<"the character is in Small letters";
    }
    else if(ch>=48 && ch<=57){
        cout<<"the character is a number";
    }
    else{
        cout<<"It is a special character";
    }
    return 0;
}