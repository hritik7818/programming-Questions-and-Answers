#include <iostream>

using namespace std;

int main()
{
    int number,reminder,originalNumber;
    int count=0;
    cout<<"Enter the number :"<<endl;
    cin>>number;
    originalNumber=number;
    while (number!=0)
    {
        reminder=number%10;
        if (reminder%2==0)
        {
            count++;
        }
        number=number/10;
    }
    cout<<"Number of even digits in "<<originalNumber<<" is "<<count<<endl;
    
    return 0;
}