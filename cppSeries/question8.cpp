#include <iostream>
using namespace std;
int main()
{
    for (int i = 42, j = 1; j <= 100; i++)
    {
        if (i % 2 == 0)
        {
            if (j == 100)
            {
                cout << i;
            }
            else
            {
                cout << i << ",";
            }
            j++;
        }
    }

    return 0;
}