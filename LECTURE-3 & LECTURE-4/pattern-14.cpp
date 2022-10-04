#include<iostream>
using namespace std;
/*
4
   *
  **
 ***
****
*/
int main()
{
    int n;
    cin>> n;
    int i=1;
    
    while (i<=n)
    {
        int j=1;
        
        int space=n;
        while(space>i)
        {
            cout<<" ";
            space--;
        }
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
        //Brute Force approach by me
        // while(j<=n)
        // {
            // if(j==(n-i+1))
            // {
            //     while(j<=n)
            //     {
            //         cout<<"*";
            //         j++;
            //     }
            // }
            // else
            // {
            //     while(j<=n)
            //     {
            //         if(j==(n-i+1))
            //         {
            //             break;
            //         }
            //         cout<<" ";
            //         j++;
            //     }
            // }
        // }
        cout<<endl;
        i++;
    }
}