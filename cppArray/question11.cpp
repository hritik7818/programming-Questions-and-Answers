#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    int arr[n];
    float sum=0;
    float average;
    int oddCount=0;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the number : "<<i+1<<endl;
        cin>>arr[i];
        if (arr[i]%2!=0)
        {
            sum=sum+arr[i];
            oddCount++;
        }
    }
    average=sum/oddCount;
    cout<<"Average of odd numbers in "<<n<<" numbers is "<<average<<endl;
    return 0;
}