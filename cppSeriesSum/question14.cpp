#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x, n;
    cout << "Enter the value of x" << endl;
    cin >> x;
    cout << "Enter the value of n" << endl;
    cin >> n;
    float sum = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + (1 / pow(x, i));
        }
    }
    cout << "Sum = " << sum << endl;
    return 0;
}