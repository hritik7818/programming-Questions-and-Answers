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
        if (i%2!=0)
        {
            sum=sum+arr[i];
        }
    }
    cout<<"Sum of number at odd indexes are : "<<sum<<endl;
    return 0;
}