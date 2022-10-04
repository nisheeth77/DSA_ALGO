#include <iostream>
using namespace std;
/*
4
1 
2 3
3 4 5
4 5 6 7
*/
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {               //without using k variable
        int j=1;    //j=0
        int k=i;
        while (j<=i)    //(j<=(i-1))
        {
            /* code */
            cout<<k <<" ";   //i+j
            j++;
            k++;
        }
        i++;
        cout<<endl;
    }
}