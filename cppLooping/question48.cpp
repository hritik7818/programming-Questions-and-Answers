#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    cout<<"Prime Number between 1 to "<<n<<" is ";
    int noOfFactor;
    for (int i = 2; i <= n; i++)
    {
        noOfFactor = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                noOfFactor++;
            }
        }
        if (noOfFactor == 2)
        {
            cout << i << ",";
        }
    }
    return 0;
}