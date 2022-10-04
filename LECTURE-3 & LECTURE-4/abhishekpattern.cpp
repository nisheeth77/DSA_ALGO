#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=1;
    int i=1;
    int s=1;
    while(i<=n)
    {
        int j=1;
        if(i%2==0)
        {
            c=c+i;
            s=c+1;
            while(j<=(2*i-1))
            {
                if(j%2!=0)
                {
                    cout<<c;
                    c--;
                }
                else
                {
                    cout<<"*";
                }
                j++;
            }
        }
        else
        {
            c=s;
            while(j<=(2*i-1))
            {
                if(j%2!=0)
                {

                    cout<<c;
                    if(j<(2*i-1))
                    {

                        c++;
                    }
                    
                }
                else
                {
                    cout<<"*";
                }
                j++;
            }

        }
        i++;
        cout<<endl;

    }
}