#include <iostream>
using namespace std;

void pallindrome(string s)
{
    
    string w="";
    int l=s.length();

    for(int i=l-1; i>=0; i--)
    {
        
        
        char ch= s[i];
        w=w+ch;
    }
    
    if(w==s)
    {
        cout<<"it is pallindrome";
    }
    else 
    {
        cout<<"it is not a pallindrome";
    }
    
}

int main()

{
    string s;
    getline(cin,s);
    pallindrome(s);
    
    
}