#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the value of x :" << endl;
    cin >> x;
    int noOfFactors;
    for (int i = 1; i <= x; i++)
    {
        noOfFactors = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                noOfFactors++;
            }
        }
        if (noOfFactors > 2)
        {
            cout << "Cube of " << i << " is " << i * i * i << endl;
        }
    }

    return 0;
}