#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number :" << endl;
    cin >> number;
    int flag = 0;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << number << " is not a prime number !" << endl;
    }
    else
    {
        cout << number << " is a prime number !" << endl;
    }
    return 0;
}