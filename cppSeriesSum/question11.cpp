#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the value of x :"<<endl;
    cin>>x;
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + pow(x,i);
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}