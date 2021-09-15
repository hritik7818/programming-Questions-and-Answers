#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    cout << "Phythagorean triplets between 1 to " << n << " are" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                if ((i * i) + (j * j) == (k * k))
                {
                    cout << i << "^2 + " << j << "^2 = " << k << "^2" << endl;
                }
            }
        }
    }

    return 0;
}