#include<iostream>
using namespace std;

/*
4
      1 
    2 3
  4 5 6
7 8 9 10
*/
int main()
{
    int n;
    cin>> n;
    int i=1;
    int val=1;
    while (i<=n)
    {
        int j=1;
        
        
        int space=n;
        while(space>i)
        {
            cout<<"  "; //two spaces given
            space--;
        }
        while(j<=i)
        {
            cout<<val<<" ";
            val++;
            j++;
        }
        i++;
        cout<<endl;
    }
}