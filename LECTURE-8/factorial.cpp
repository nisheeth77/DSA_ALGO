#include <iostream>
using namespace std;

int factorial(int n)
{
    int num=1;
    for(int i=1;i<=n;i++)
    {
        num=num*i;
    }
    return num;
}
int nCr(int n, int r)
{
    int num=factorial(n);
    int dnom=factorial(r)*factorial(n-r);
    int ans=num/dnom;
    return ans;
}

int main()
{
    int n,r;
    cin>>n>>r;
    cout<<factorial(n);
    cout<<nCr(n,r);
    
    return 0;
}