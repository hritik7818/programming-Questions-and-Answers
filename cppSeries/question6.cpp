#include <iostream>
using namespace std;
int main()
{
    for (int i = 1, j = 1; j <= 20; i++)
    {
        if (i % 2 == 0)
        {
            if (j == 20)
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