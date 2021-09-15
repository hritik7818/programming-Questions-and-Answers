#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    int sum = 0;
    for (int i = 1, j = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            if (j % 2 != 0)
            {
                sum = sum + i;
                j++;
            }
            else if (j % 2 == 0)
            {
                sum = sum - i;
                j++;
            }
        }
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}