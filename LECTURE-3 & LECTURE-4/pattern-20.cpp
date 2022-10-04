#include<iostream>
using namespace std;
/*
4
5
    1
   121
  12321
 1234321
123454321
*/
int main()
{
    int n;
    cin>> n;
    int i=1;
   
    while (i<=n)
    {
        int j=1;
        
        
        int space=n-1;
        while(space>=i)
        {
            cout<<" "; 
            space--;
        }
        while(j<=i)
        {
            cout<<j;
            
            j++;
        }
        if(i!=1)
        {
            int k=i-1;
            int x=1;
            while(x<=(i-1))
            {
                cout<<k;
                x++;
                k--;
            }
        }
        i++;
        cout<<endl;
    }
}