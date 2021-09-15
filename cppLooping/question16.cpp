#include <iostream>
using namespace std;
int main()
{
    int number,originalNumber;
    cout<<"Enter the number :"<<endl;
    cin>>number;
    originalNumber=number;
    int count=0;
    while (number!=0)
    {
        number=number/10;
        count++;
    }
    cout<<"Number of digit in "<<originalNumber<<" is "<<count<<endl;
    return 0;
}