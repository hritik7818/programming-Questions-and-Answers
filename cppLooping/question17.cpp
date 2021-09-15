#include <iostream>
using namespace std;
int main()
{
    int number,originalNumber;
    cout<<"Enter the number :"<<endl;
    cin>>number;
    originalNumber=number;
    int reverseNumber=0;
    while (number!=0)
    {
        reverseNumber=(reverseNumber*10)+(number%10);
        number=number/10;
    }
    cout<<"Reverse of "<<originalNumber<<" is "<<reverseNumber<<endl;
    return 0;
}