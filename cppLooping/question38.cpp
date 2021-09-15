#include <iostream>
using namespace std;
int main()
{
    int number,originalNumber,maximum;
    cout<<"Enter the number :"<<endl;
    cin>>number;
    originalNumber=number;
    maximum=number%10;
    while (number!=0)
    {
        if (number%10>maximum)
        {
            maximum=number%10;
        }
        number=number/10;
    }
    cout<<"Largest digit of "<<originalNumber<<" is "<<maximum<<endl;
    return 0;
}