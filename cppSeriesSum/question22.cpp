#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x, n;
    cout << "Enter the value of x :" << endl;
    cin >> x;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    float sum = 0;
    float factorial;
    for (int i = 1, k = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            if (i == 1)
            {
                sum = sum + 1;
                k++;
                continue;
            }

            factorial = 1;
            for (int j = i; j > 0; j--)
            {
                factorial = factorial * j;
            }
            if (k % 2 != 0)
            {
                sum = sum + (pow(x, i) / factorial);
                k++;
            }
            else if (k % 2 == 0)
            {
                sum = sum - (pow(x, i) / factorial);
                k++;
            }
        }
    }
    cout << "Sum = " << sum << endl;
    return 0;
}