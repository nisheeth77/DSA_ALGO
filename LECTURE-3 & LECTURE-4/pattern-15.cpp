#include<iostream>
using namespace std;
using namespace std;
/*
4
****
 ***
  **
   *
*/
int main()
{
    int n;
    cin>> n;
    int i=1;
    
    while (i<=n)
    {
        int j=1;
        
        int space=0;
        while(space<(i-1))
        {
            cout<<" ";
            space++;
        }
        while(j<=n-i+1)
        {
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    }
}