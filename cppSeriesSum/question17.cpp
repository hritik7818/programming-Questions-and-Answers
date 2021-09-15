#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    int multiplication=1;
    for (int i = 1; i <= n; i++)
    {
        multiplication=multiplication*i;
    }
    cout<<"Multiplication = "<<multiplication<<endl;
    return 0;
}