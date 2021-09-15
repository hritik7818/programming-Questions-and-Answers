#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    int arr[n];
    int largest;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the number : "<<i+1<<endl;
        cin>>arr[i];
        if (i==0)
        {
            largest=0;
        }
        else if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"Largest number in array is "<<largest<<endl;
    return 0;
}