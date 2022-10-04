#include<iostream>
using namespace std;
using namespace std;
/*
4
   1
  22
 333
4444
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
            cout<<i;
            j++;
        }
        i++;
        cout<<endl;
    }
}