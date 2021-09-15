#include <iostream>
using namespace std;
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"Number : "<<i+1<<" is "<<arr[i]<<endl;
    } 
}
void swap(int arr[],int a,int b){
    int temp;
    temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
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
    cout<<"Before swapping :"<<endl;
    printArray(arr,n);
    // bubble sort
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]<arr[j+1])
            {
                swap(arr,j,j+1);
            }   
        }
    }
    cout<<"After swapping :"<<endl;
    printArray(arr,n);
    return 0;
}