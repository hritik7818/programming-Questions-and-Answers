#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 40; i++)
    {
        if (i == 40)
        {
            cout << 12 * i;
        }
        else
        {
            cout << 12 * i << ",";
        }
    }

    return 0;
}