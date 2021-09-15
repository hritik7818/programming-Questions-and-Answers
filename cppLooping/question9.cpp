#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number :" << endl;
    cin >> number;
    cout << "All factor of " << number << " which are prime is ";
    int flag;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            flag = 0;
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << i << " ";
            }
        }
    }
    return 0;
}