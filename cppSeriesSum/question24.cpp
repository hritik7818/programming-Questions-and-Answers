#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            sum=sum+j;
        }
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}