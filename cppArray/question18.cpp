#include <iostream>
using namespace std;
void swap(int* a,int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the Number : "<<i+1<<endl;
        cin>>arr[i];
    }
    int maximum;
    int maximumNOIndex;
    for (int i = 0; i < n-1; i++)
    {
        maximum=arr[i];
        maximumNOIndex=i;
        for (int j = i; j < n; j++)
        {
            if (maximum<arr[j])
            {
                maximum=arr[j];
                maximumNOIndex=j;
            }
        }
        swap(&arr[maximumNOIndex],&arr[i]);
    }
    cout<<"After the sorting :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Number : "<<i+1<<" is "<<arr[i]<<endl;
    }
    return 0;
}