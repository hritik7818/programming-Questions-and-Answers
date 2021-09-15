#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    int arr1[n];
    int sum1=0;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the number : "<<i+1<<" of array A"<<endl;
        cin>>arr1[i];
        if (arr1[i]%2==0)
        {
            sum1=sum1+arr1[i];
        }
    }
    cout<<"Enter the value of m : "<<endl;
    cin>>m;
    int arr2[m];
    int sum2=0;
    for (int i = 0; i < m; i++)
    {
        cout<<"Enter the number : "<<i+1<<" of array B"<<endl;
        cin>>arr2[i];
        if (arr2[i]%2!=0)
        {
            sum2=sum2+arr2[i];
        }
    }
    cout<<"Sum of even numbers in array A is "<<sum1<<endl;
    cout<<"Sum of odd numbers in array B is "<<sum2<<endl;
    
    
    return 0;
}