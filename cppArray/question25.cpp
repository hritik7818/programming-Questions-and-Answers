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
        cout<<"Enter the number-"<<i+1<<endl;
        cin>>arr[i];
    }
    //code for first largest number 
    int firstLargest=arr[0];
    int maximumNoIndex;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>firstLargest)
        {
            firstLargest=arr[i];
            maximumNoIndex=i;
        }
    }
    //code for second largest number
    int secondLargest;
    if (maximumNoIndex==0)
    {
        secondLargest=arr[1];
    }
    else
    {
        secondLargest=arr[0];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>secondLargest&&arr[i]!=firstLargest)
        {
            secondLargest=arr[i];
        }
    }
    cout<<"Second largest number in the array is "<<secondLargest<<endl;
    return 0;
}