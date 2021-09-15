#include <iostream>
using namespace std;
int main()
{
    for (int i = 11; i <= 50; i++)
    {
        if (i == 50)
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