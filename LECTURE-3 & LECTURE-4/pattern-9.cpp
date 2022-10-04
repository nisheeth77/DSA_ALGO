#include<iostream>
using namespace std;
/*
4
A A A A 
B B B B
C C C C
D D D D
*/
int main()
{
    int n;
    cin>> n;
    int i=1;
    
    while (i<=n)
    {
        int j=1;
        
        char ch='@'+i;
        while(j<=n)
        {
            
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}