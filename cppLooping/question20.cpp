#include <iostream>

using namespace std;

int main()
{
    int number;
    cout<<"Enter the number :"<<endl;
    cin>>number;
    int numberCopy;
    numberCopy=number;
    int firstDigit,lastDigit;
    // finding first digit
    while (numberCopy>10)
    {
        numberCopy=numberCopy/10;
    }
    firstDigit=numberCopy;
    // finding last digit
    lastDigit=number%10;
    int sum;
    sum=firstDigit+lastDigit;
    cout<<"Sum of first digit and last digit of "<<number<<" is "<<sum<<endl;
    return 0;
}