#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    int sum=0;
    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter the number : "<<i+1<<endl;
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"Sum of 10 numbers are : "<<sum<<endl;
    return 0;
}