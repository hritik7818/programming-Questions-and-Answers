#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            if (i == 20)
            {
                cout << i;
            }
            else
            {
                cout << i << ",";
            }
        }
    }

    return 0;
}