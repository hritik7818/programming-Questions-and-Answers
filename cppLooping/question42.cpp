#include <iostream>
using namespace std;
int main()
{
    int number, originalNumber, reminder;
    int sum = 0;
    cout << "Enter the number :" << endl;
    cin >> number;
    originalNumber = number;
    while (number != 0)
    {
        reminder = number % 10;
        sum = sum + (reminder * reminder * reminder);
        number = number / 10;
    }
    if (sum == originalNumber)
    {
        cout << originalNumber << " is a Armstrong number!" << endl;
    }
    else
    {
        cout << originalNumber << " is not a Armstrong number!" << endl;
    }

    return 0;
}