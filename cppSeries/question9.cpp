#include <iostream>
using namespace std;
int main()
{
    for (int i = 10; i > 0; i--)
    {
        if (i == 1)
        {
            cout << i;
        }
        else
        {
            cout << i << ",";
        }
    }

    return 0;
}