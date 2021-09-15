#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number :" << endl;
    cin >> number;
    for (int i = 1; i <= 20; i++)
    {
        cout << number << " X " << i << " = " << number * i << endl;
    }

    return 0;
}