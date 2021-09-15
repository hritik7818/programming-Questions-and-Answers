#include <iostream>

using namespace std;

int main()
{
    int n;
    float sum=0;
    float average;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the number : "<<i+1<<endl;
        cin>>arr[i];
        sum=sum+arr[i];
    }
    average=sum/n;
    cout<<"Average of "<<n<<" number are "<<average<<endl;
    return 0;
}