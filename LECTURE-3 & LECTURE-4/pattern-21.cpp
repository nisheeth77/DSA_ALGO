#include<iostream>
using namespace std;
using namespace std;
/*
4
1 2 3 4 4 3 2 1 
1 2 3 * * 3 2 1
1 2 * * * * 2 1
1 * * * * * * 1
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
        int val =1;
        while(j<=n-i+1)
        {
            cout<<val<<" ";
            val++;
            j++;
        }
        if(i!=1)
        {
            int star=1;
            while(star<=(i-1))
            {
                cout<<"*"<<" ";
                star++;
            }
        }
        if(i!=1)
        {
            int star=1;
            while(star<=(i-1))
            {
                cout<<"*"<<" ";
                star++;
            }
        }
         int j2=1;
        int val2 =n-i+1;
        while(j2<=n-i+1)
        {
            cout<<val2<<" ";
            val2--;
            j2++;
        }
        
        i++;
        cout<<endl;
    }
}