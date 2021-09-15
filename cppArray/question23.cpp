#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number-" << i + 1 << endl;
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (arr[j] == arr[i])
                {
                    for (int k = j; k < n-1; k++)
                    {
                        arr[k] = arr[k + 1];
                    }
                    n = n - 1;
                }
            }
        }
    }
    cout << "After removing duplicate values from the array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Number " << i + 1 << " is " << arr[i] << endl;
    }

    return 0;
}