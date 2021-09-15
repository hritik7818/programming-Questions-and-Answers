#include <iostream>
using namespace std;
int main()
{
    int number,numberCopy;
    cout<<"Enter the number :"<<endl;
    cin>>number;
    numberCopy=number;
    int count=0;
    while (numberCopy!=0)
    {
        if (numberCopy%10==0)
        {
            count++;
        }
        numberCopy=numberCopy/10;
    }
    cout<<"Number of zeros in "<<number<<" is "<<count<<endl;
    return 0;
}