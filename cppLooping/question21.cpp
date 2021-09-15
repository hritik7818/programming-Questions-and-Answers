#include <iostream>
using namespace std;
int main()
{
    int number,reminder,factorCount;
    cout<<"Enter the number :"<<endl;
    cin>>number;
    cout<<"Prime digits of "<<number<<" are ";
    while (number!=0)
    {
        reminder=number%10;
        factorCount=0;
        for (int i = 1; i <= reminder; i++)
        {
            if (reminder%i==0)
            {
                factorCount++;
            }
        }
        if (factorCount==2)
        {
            cout<<reminder<<" , ";
        }
        number=number/10;
    }
    return 0;
}