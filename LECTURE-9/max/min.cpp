#include <iostream>
using namespace std;

void printmaxmin(int arr[], int n)
{
    int max=INT_MIN;
    int min=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"maximum num is "<<max<<endl ;
    cout<<"minimum num is "<<min;
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
    printmaxmin(arr,n);
    return 0;
}