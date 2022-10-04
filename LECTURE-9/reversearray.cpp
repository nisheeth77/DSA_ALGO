#include <iostream>
using namespace std;

void rev(int arr[], int n)
{
    int temp=0;
    
    
    for(int i=0, j=n-1;i<=j;i++,j--)
    {
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;

    }
   
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    rev(arr,n);
    cout<<endl;
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
