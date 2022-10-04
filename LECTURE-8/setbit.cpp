#include <iostream>
using namespace std;

int one(int a)
{
    int x=0,c=0;
    while(a!=0 )
    {
         x =a&1;
        
         cout<<"x= "<<x<<endl;
         
         if(x==1 )
         {
            c++;

         }
         a=a>>1;
        
    }
    return c;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"no of 1's are "<<one(a)+one(b);
    return 0;

}
