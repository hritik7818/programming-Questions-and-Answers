#include <iostream>
using namespace std;
int main()
{
    int number,numberCopy,reminder;
    int sum=0;
    cout<<"Enter the number :"<<endl;
    cin>>number;
    numberCopy=number;
    while (numberCopy!=0)
    {
        reminder=numberCopy%10;
        if (reminder%2==0)
        {
            sum=sum+(reminder*reminder*reminder);
        }
        numberCopy=numberCopy/10;
    }
    cout<<"Sum of cube of even digit of "<<number<<" is "<<sum<<endl;
    return 0;
}