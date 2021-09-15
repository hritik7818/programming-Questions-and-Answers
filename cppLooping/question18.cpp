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
        reverseNumber=reverseNumber*10+number%10;
        number=number/10;
    }
    if (reverseNumber==originalNumber)
    {
        cout<<originalNumber<<" is palindrome number!"<<endl;
    }
    else
    {
        cout<<originalNumber<<" is not a palindrome number!"<<endl;
    }
    return 0;
}