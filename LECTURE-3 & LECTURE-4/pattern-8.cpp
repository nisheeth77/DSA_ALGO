#include<iostream>
using namespace std;
/*
4
1 
2 1
3 2 1
4 3 2 1
*/
int main()
{
    int n;
    cin>> n;
    int i=1;
    while (i<=n)
    {                       //Alternative Method
       int j =i;            //j=1
       while(j>=1)          //j<=i
       {
        cout<<j<<" ";       //i-j+1
        j--;                //j++
       }
        cout<<endl;
        i++;
    }
    
}