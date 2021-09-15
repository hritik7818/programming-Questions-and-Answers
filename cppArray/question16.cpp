#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    int arr[n];
    int smallest;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the Number : "<<i+1<<endl;
        cin>>arr[i];
        if (i==0)
        {
            smallest=arr[i];
        }
        else if (smallest>arr[i])
        {
            smallest=arr[i];
        }
    }
    cout<<"Smallest in array is "<<smallest<<endl;
    return 0;
}