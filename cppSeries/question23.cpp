#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    long long initialValue = 1;
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            cout << initialValue;
        }
        else
        {
            cout << initialValue << ",";
        }
        initialValue = initialValue * 10 + 1;
    }
    return 0;
}