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
        cout<<"Enter the number -"<<i+1<<endl;
        cin>>arr[i];
    }
    //code for largest number
    int largestNumber=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>largestNumber)
        {
            largestNumber=arr[i];
        }
    }
    //code for smallest number
    int smallestNumber=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<smallestNumber)
        {
            smallestNumber=arr[i];
        }
    }
    //code for average
    int sum=0;
    float average;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=smallestNumber&&arr[i]!=largestNumber)
        {
            sum=sum+arr[i];
        }
    }
    cout<<"sum is "<<sum<<endl;
    average=(float)sum/(n-2);
    cout<<"The average of all numbers in the array except smallest number and largest number is "<<average<<endl;
    return 0;
}