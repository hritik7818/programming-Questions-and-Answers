#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the number-"<<i+1<<endl;
        cin>>arr[i];
    }
    int NegativeNOIndex=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<0)
        {
            int temp,loc;
            temp=arr[i];
            loc=i;
            while (loc!=NegativeNOIndex)
            {
                arr[loc]=arr[loc-1];
                loc=loc-1;
            }
            arr[loc]=temp;
            NegativeNOIndex++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"Number - "<<i+1<<" is "<<arr[i]<<endl;
    }
    
    return 0;
}