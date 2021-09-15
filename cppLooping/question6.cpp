#include <iostream>

using namespace std;

int main()
{
    int number;
    cout<<"Enter the number :"<<endl;
    cin>>number;
    int sum=0;
    for (int i = 1; i <= number; i++)
    {
        if (number%i==0&&i%2!=0)
        {
            sum=sum+i;
        }
    }
    cout<<"Sum of all odd factor of "<<number<<" is "<<sum<<endl;
    return 0;
}