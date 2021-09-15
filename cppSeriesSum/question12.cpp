#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    int sum = 0;
    int factorial;
    for (int i = 1; i <= n; i++)
    {
        factorial = 1;
        for (int j = i; j > 0; j--)
        {
            factorial = factorial * j;
        }
        sum = sum + factorial;
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}