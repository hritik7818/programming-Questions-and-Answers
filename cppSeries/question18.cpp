#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 20; i++)
    {
        if (i == 20)
        {
            cout << 4 * i;
        }
        else
        {
            cout << 4 * i << ",";
        }
    }

    return 0;
}