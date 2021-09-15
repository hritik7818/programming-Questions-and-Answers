#include <iostream>
using namespace std;
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"Number : "<<i+1<<" is "<<arr[i]<<endl;
    }
}
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
    cout<<"Before sorting :"<<endl;
    printArray(arr,n);
    //insertion sort
    for(int i =1;i<n;i++)
    {
        if (arr[i-1]>arr[i])
        {
            int temp,loc;
            temp=arr[i];
            loc=i;
            while (loc!=0&&arr[loc-1]>temp)
            {
                arr[loc]=arr[loc-1];
                loc=loc-1;
            }
            arr[loc]=temp;
        }
    }
    cout<<"After sorting :"<<endl;
    printArray(arr,n);
    return 0;
}