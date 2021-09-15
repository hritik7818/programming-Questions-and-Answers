#include <iostream>
using namespace std;
int main()
{
    int number,average,reminder,originalNumber;
    int sum=0;
    int count=0;
    cout<<"Enter the number :"<<endl;
    cin>>number;
    originalNumber=number;
    while (number!=0)
    {
        reminder=number%10;
        sum=sum+reminder;
        count++;
        number=number/10;
    }
    average=sum/count;
    cout<<"Average of digits of "<<originalNumber<<" is "<<average<<endl;
    return 0;
}