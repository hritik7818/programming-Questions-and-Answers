#include <iostream>

using namespace std;

int main()
{
    int number;
    cout<<"Enter the number :"<<endl;
    cin>>number;
    int numberOfFactor;
    int numberOfPrimeFactor=0;
    for (int i = 1; i <= number; i++)
    {
        if (number%i==0)
        {
            numberOfFactor=0;
            for (int j = 1; j <= i; j++)
            {
                if (i%j==0)
                {
                    numberOfFactor++;
                }
            }
            if (numberOfFactor==2)
            {
                numberOfPrimeFactor++;
            }
        }
    }
    cout<<"Number of prime factor of "<<number<<" is "<<numberOfPrimeFactor<<endl;
    return 0;
}