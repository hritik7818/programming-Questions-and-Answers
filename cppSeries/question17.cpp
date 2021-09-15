#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 20; i++)
    {
        if (i == 20)
        {
            cout << 3 * i;
        }
        else
        {
            cout << 3 * i << ",";
        }
    }

    return 0;
}