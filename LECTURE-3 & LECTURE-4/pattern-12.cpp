#include<iostream>
using namespace std;
/*
4
A 
B C
D E F
G H I J
*/
int main()
{
    int n;
    cin>> n;
    int i=1;
    char ch='@';
    while (i<=n)
    {
        int j=1;
        
        
        while(j<=i)
        {
            ch++;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}