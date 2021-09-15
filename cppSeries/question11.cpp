#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 20; i++)
    {
        if (i == 20)
        {
            cout << i * i;
        }
        else
        {
            cout << i * i << ",";
        }
    }

    return 0;
}