#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the value of x :"<<endl;
    cin>>x;
    int sum = 0;
    for (int i = 0; i <= 16; i++)
    {
        sum = sum + pow(x,i);
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}