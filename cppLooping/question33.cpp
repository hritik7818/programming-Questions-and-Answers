#include <iostream>

using namespace std;

int main()
{
    int number, numberCopy, reminder;
    int sum = 0;
    int factorial;
    cout << "Enter the number :" << endl;
    cin >> number;
    numberCopy = number;
    while (numberCopy != 0)
    {
        reminder = numberCopy % 10;
        factorial=1;
        for (int i = reminder; i > 0; i--)
        {
            factorial = factorial * i;
        }
        sum = sum + factorial;
        numberCopy = numberCopy / 10;
    }
    cout << "Sum of factorial of each digit of " << number << " is " << sum << endl;
    return 0;
}