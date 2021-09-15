#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;
    cout << "All armstrong number between 1 to " << n << " is ";
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = 0;
        int iCopy = i;
        while (iCopy != 0)
        {
            int reminder;
            reminder = iCopy % 10;
            sum = sum + (reminder * reminder * reminder);
            iCopy = iCopy / 10;
        }
        if (sum == i)
        {
            cout << i << ",";
        }
    }

    return 0;
}