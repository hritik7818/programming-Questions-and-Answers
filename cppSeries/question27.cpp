#include <iostream>
using namespace std;
int main()
{
    int n;
    int oddPlaceInitialValue = 7;
    int evenPlaceInitialValue = 8;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            if (i % 2 != 0)
            {
                cout << oddPlaceInitialValue;
                oddPlaceInitialValue = oddPlaceInitialValue + 2;
            }
            else if (i % 2 == 0)
            {
                cout << evenPlaceInitialValue;
                evenPlaceInitialValue = evenPlaceInitialValue + 3;
            }
        }

        else if (i % 2 != 0)
        {
            cout << oddPlaceInitialValue << ",";
            oddPlaceInitialValue = oddPlaceInitialValue + 2;
        }
        else if (i % 2 == 0)
        {
            cout << evenPlaceInitialValue << ",";
            evenPlaceInitialValue = evenPlaceInitialValue + 3;
        }
    }

    return 0;
}