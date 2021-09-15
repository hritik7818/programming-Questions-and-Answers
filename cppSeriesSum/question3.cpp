#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    for (int i = 1, j = 1; j <= 50; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
            j++;
        }
    }
    cout << "sum = " << sum << endl;
    return 0;
}