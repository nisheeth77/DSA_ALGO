
/* 
Pattern-3
1 2 3 4 
1 2 3 4 
1 2 3 4 
1 2 3 4 
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        /*
        for printing in reverse 

        4 3 2 1 
        4 3 2 1 
        4 3 2 1 
        4 3 2 1 

        */
       
       int j=n; // j=1
       while(j>=1) //j<=n
       {
        cout<< j<< " "; //cout<<n-j+1<<" "
        j--;  //j++
       }
       
        // int j=1;
        // while(j<=n)
        // {
        //     cout<< j<< " ";
        //     j++;
        // }
        cout<<endl;
        i++;
    }
}