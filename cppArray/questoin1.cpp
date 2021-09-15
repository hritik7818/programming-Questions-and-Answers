#include <iostream>

using namespace std;

int main()
{
    int n;
    int positiveCount=0;
    int negativeCount=0;
    int zeroCount=0;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the number : "<<i+1<<endl;
        cin>>arr[i];
        if(arr[i]>0){
            positiveCount++;
        }
        else if(arr[i]<0){
            negativeCount++;
        }
        else if (arr[i]==0)
        {
            zeroCount++;
        }
    }
    cout<<"positive numbers : "<<positiveCount<<endl;
    cout<<"negative numbers : "<<negativeCount<<endl;
    cout<<"zeros : "<<zeroCount<<endl;
    return 0;
}