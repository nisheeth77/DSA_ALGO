#include<iostream>
#include<math.h>
using namespace std;

int main()
{
   signed int n;
    cin>>n;
    int i=0,b;
    long long int ans=0;
    while(n!=0)
    {
        b=n&1;
        
        ans=(b*pow(10,i))+ans;

        n=n>>1;
        i++;
    }
    cout<<ans;
    return 0;
}
