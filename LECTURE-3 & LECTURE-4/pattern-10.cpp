#include<iostream>
using namespace std;
/*
4
A B C D 
A B C D
A B C D
A B C D
*/
int main()
{
    int n;
    cin>> n;
    int i=1;
    
    while (i<=n)
    {
        int j=1;
        char ch='@';
        
        while(j<=n)
        {
         ch='@'+j;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}