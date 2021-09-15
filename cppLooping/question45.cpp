#include <iostream>
using namespace std;
int countDigits(int number){
    int count=0;
    while (number!=0)
    {
        number=number/10;
        count++;
    }
    return count;
}
int main()
{
    int number,squareOfNumber;
    cout<<"Enter the number :"<<endl;
    cin>>number;
    squareOfNumber=number*number;
    int noOfDigits=countDigits(number);
    int divisor=1;
    for (int i = 0; i < noOfDigits; i++)
    {
        divisor=divisor*10;
    }
    if (squareOfNumber%divisor==number)
    {
        cout<<number<<" is a automorphic number!"<<endl;
    }
    else
    {
        cout<<number<<" is not a automorphic number!"<<endl;
    }
    return 0;
}