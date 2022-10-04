#include<iostream>
using namespace std;
/*
4
A B C D 
B C D E
C D E F
D E F G
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
            ch++;
        }
        cout<<endl;
        i++;
    }
}