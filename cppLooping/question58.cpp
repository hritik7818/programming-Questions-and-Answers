#include <iostream>
using namespace std;
int main()
{
    int number, numberCopy, reminder;
    cout << "Enter the number :" << endl;
    cin >> number;
    numberCopy = number;
    int sum = 0;
    int factorial;
    while (numberCopy != 0)
    {
        reminder = numberCopy % 10;
        factorial = 1;
        for (int i = reminder; i > 0; i--)
        {
            factorial = factorial * i;
        }
        sum = sum + factorial;
        numberCopy=numberCopy/10;
    }
    if (sum == number)
    {
        cout << number << " is a special number!" << endl;
    }
    else
    {
        cout << number << " is not a special number!" << endl;
    }

    return 0;
}