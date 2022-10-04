#include<iostream>
using namespace std;
/*
4
D 
D C
D C B
D C B A
*/
int main()
{
    int n;
    cin>> n;
    int i=1;
    
    while (i<=n)
    {
        int j=1;        //Alternative method
                            //char ch='A'+n-i
        
        while(j<=i)
        {
         char ch='@'+n+1-j;  // Dont write line 23
            cout<<ch<<" ";      
                            //ch++
            j++;
        }
        cout<<endl;
        i++;
    }
}