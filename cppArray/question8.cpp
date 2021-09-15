#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    int oddCount=0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the number : "<<i+1<<endl;
        cin>>arr[i];
        if (arr[i]%2!=0)
        {
            oddCount++;
        }
    }
    cout<<"odd numbers are : "<<oddCount<<endl;
    return 0;
}