#include <iostream>

using namespace std;

int main()
{
    int number, reminder, originalNumber, factorCount;
    int primeNumberCount = 0;
    cout << "Enter the number :" << endl;
    cin >> number;
    originalNumber = number;
    while (number != 0)
    {
        reminder = number % 10;
        //checking reminder for prime
        factorCount = 0;
        for (int i = 1; i <= reminder; i++)
        {
            if (reminder % i == 0)
            {
                factorCount++;
            }
        }
        if (factorCount == 2)
        {
            primeNumberCount++;
        }
        number=number/10;
    }
    cout << "Number of prime digits in " << originalNumber << " is " << primeNumberCount << endl;
    return 0;
}