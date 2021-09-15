#include <iostream>
using namespace std;
int main()
{
    for (int i = 11, j = 1; j <= 50; i++)
    {
        if (i % 2 != 0)
        {
            if (j == 50)
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