#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cout << "Enter the value of m : " << endl;
    cin >> m;
    int arrA[m];
    for (int i = 0; i < m; i++)
    {
        cout << "Enter the number : " << i + 1 << " of array A" << endl;
        cin >> arrA[i];
    }
    cout << "Enter the value of n : " << endl;
    cin >> n;
    int arrB[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number : " << i + 1 << " of array B" << endl;
        cin >> arrB[i];
    }
    int arrC[m + n];
    for (int i = 0; i < m; i++)
    {
        arrC[i] = arrA[i];
    }
    for (int i = m, j = 0; i < (m + n); i++, j++)
    {
        arrC[i] = arrB[j];
    }
    for (int i = 0; i < (m + n); i++)
    {
        cout << "Number " << i + 1 << " is " << arrC[i] << endl;
    }
    return 0;
}