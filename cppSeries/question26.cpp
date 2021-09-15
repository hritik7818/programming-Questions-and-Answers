#include <iostream>
using namespace std;
int main()
{
    int n;
    long long int value;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if (i==n)
        {
            value=(long long)i*i*i*i;
            cout<<value;
        }
        else
        {
            value=(long long)i*i*i*i;
            cout<<value<<",";
        }
        
    }
    
    return 0;
}