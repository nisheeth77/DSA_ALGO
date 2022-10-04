#include<iostream>
using namespace std;
using namespace std;
/*
4
1234
 234
  34
   4
*/
int main()
{
    int n;
    cin>> n;
    int i=1;
    
    while (i<=n)
    {
        int j=1;
        int val=i;
        
        int space=0;
        while(space<(i-1))
        {
            cout<<" ";
            space++;
        }
        while(j<=n-i+1)
        {
            cout<<val;
            val++;
            j++;
        }
        i++;
        cout<<endl;
    }
}