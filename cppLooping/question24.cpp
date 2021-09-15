#include <iostream>
using namespace std;
int main()
{
    int number, reminder, factorial;
    cout << "Enter the number :" << endl;
    cin >> number;
    cout << "factorial of each digit of " << number << " is " << endl;
    while (number != 0)
    {
        reminder = number % 10;
        factorial=1;
        for (int i = reminder; i > 0; i--)
        {
            factorial=factorial*i;
        }
        cout<<factorial<<" , ";
        number=number/10;
    }

    return 0;
}