#include <iostream>
using namespace std;
int main()
{
    int number,originalNumber,minimum;
    cout<<"Enter the number :"<<endl;
    cin>>number;
    originalNumber=number;
    minimum=number%10;
    while (number!=0)
    {
        if (number%10<minimum)
        {
            minimum=number%10;
        }
        number=number/10;
    }
    cout<<"Smallest digit of "<<originalNumber<<" is "<<minimum<<endl;
    return 0;
}