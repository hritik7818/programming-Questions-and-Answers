#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number :" << endl;
    cin >> number;
    cout << "Odd factor of " << number << " is ";
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0 && i % 2 != 0)
        {
            cout << i << ",";
        }
    }
    return 0;
}