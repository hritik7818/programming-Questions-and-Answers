#include <iostream>

using namespace std;

int main()
{
    int number;
    cout<<"Enter the number :"<<endl;
    cin>>number;
    int sum=0;
    for (int i = 1; i < number; i++)
    {
        if (number%i==0)
        {
            sum=sum+i;
        }
    }
    if (sum==number)
    {
        cout<<number<<" is a perfect number"<<endl;
    }
    else
    {
        cout<<number<<" is not a perfect number"<<endl;
    }
    return 0;
    }