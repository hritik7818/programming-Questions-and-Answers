#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the number : "<<i+1<<endl;
        cin>>arr[i];
    }
    int minimum;
    int minimumNoIndex;
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        minimum=arr[i];
        minimumNoIndex=i;
        for (int j = i; j < n; j++)
        {
            if (minimum>arr[j])
            {
                minimum=arr[j];
                minimumNoIndex=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[minimumNoIndex];
        arr[minimumNoIndex]=temp;
    }
    cout<<"After sorting : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Number : "<<i+1<<" is "<<arr[i]<<endl;
    }
    return 0;
}