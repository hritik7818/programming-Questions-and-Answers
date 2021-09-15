#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number :" << endl;
    cin >> number;
    cout << "Prime Factorization of " << number << " is ";
    while (number != 1)
    {
        for (int i = 2; i <= number; i++)
        {
            if (number%i==0)
            {
                cout<<i<<",";
                number=number/i;
                break;
            }
        }
    }

    return 0;
}