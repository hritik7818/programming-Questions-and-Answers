#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    int arr1[n],arr2[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the number : "<<i+1<<" of array A"<<endl;
        cin>>arr1[i];
        arr2[i]=arr1[i]*arr1[i];
    }
    cout<<"Number        Square"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"  "<<arr1[i]<<"              "<<arr2[i]<<endl;
    }
    return 0;
}