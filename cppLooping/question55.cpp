#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the value of x :" << endl;
    cin >> x;
    cout << "All non-perfect number till  " << x << " is ";
    int sum;
    for (int i = 1; i <= x; i++)
    {
        sum = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }
        if (sum != i)
        {
            cout << i << ",";
        }
    }

    return 0;
}