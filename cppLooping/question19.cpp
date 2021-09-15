#include <iostream>
using namespace std;
int main()
{
    int number,originalNumber;
    cout<<"Enter the number :"<<endl;
    cin>>number;
    originalNumber=number;
    int sum=0;
    while (number!=0)
    {
        sum=sum+number%10;
        number=number/10;
    }
    cout<<"Sum of digits of "<<originalNumber<<" is "<<sum<<endl;
    return 0;
}