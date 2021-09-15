#include <iostream>

using namespace std;

int main()
{
    int number,reminder,originalNumber;
    int sum=0;
    cout<<"Enter the number :"<<endl;
    cin>>number;
    originalNumber=number;
    while (number!=0)
    {
        reminder=number%10;
        if (reminder%2==0)
        {
            sum=sum+reminder;
        }
        number=number/10;
    }
    cout<<"Sum of even digit of "<<originalNumber<<" is "<<sum<<endl;
    
    return 0;
}