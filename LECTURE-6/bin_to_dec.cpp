#include<iostream>
#include<math.h>
using namespace std;

int main()
{
   int n;
    cin>>n;
    int i=0,ans=0,bit=0;
    while(n!=0)
    {
        bit=n%10;
        if(bit==0)
        {
            i++;
            n=n/10;
            
        }
        else
        {
            ans=pow(2,i)+ans;
            n=n/10;
            i++;

        }
    }
    cout<<ans;
}