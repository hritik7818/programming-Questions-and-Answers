#include <iostream>
using namespace std;
int main()
{
    int decimalNumber, reminder;
    cout << "Enter the Decimal Number :" << endl;
    cin >> decimalNumber;
    char arr[100];
    int i = 0;
    while (decimalNumber != 0)
    {
        reminder = decimalNumber % 16;
        if (reminder < 10)
        {
            reminder = reminder + 48;
            arr[i] = reminder;
        }
        else if (reminder >= 10)
        {
            reminder = reminder + 55;
            arr[i] = reminder;
        }
        decimalNumber = decimalNumber / 16;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << arr[j];
    }

    return 0;
}