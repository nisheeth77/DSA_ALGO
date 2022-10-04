#include<iostream>
using namespace std;
int main()
{
    int n;
     cin>>n;
     int i=2,c=0;
     while(i<=n)
     {
        if(n%i==0)
        {
            c++;
        }
        i++;
     }
    if(c>1)
    {
        cout<<"it is not a  prime number";
    }
    else{
        cout<<"it is  a prime number";
    }
}