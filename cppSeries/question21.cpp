#include <iostream>
using namespace std;
int main()
{
    int initialValue = 100;
    int difference = 3;
    while (initialValue >= 10)
    {
        if (initialValue == 10)
        {
            cout << initialValue;
        }
        else
        {
            cout << initialValue << ",";
        }
        initialValue = initialValue - difference;
    }

    return 0;
}