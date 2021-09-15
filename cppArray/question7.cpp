#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    int evenCount=0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the number : "<<i+1<<endl;
        cin>>arr[i];
        if (arr[i]%2==0)
        {
            evenCount++;
        }
    }
    cout<<"Even numbers are : "<<evenCount<<endl;
    return 0;
}