#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    int multiplication = 1;
    for (int i = 1, j = 1; j <= n; i++)
    {
        if (i % 2 != 0)
        {
            multiplication = multiplication * i;
            j++;
        }
    }
    cout << "Multiplication = " << multiplication << endl;
    return 0;
}