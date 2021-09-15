#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void sortArray(int arr[], int n)
{
    bool isSorted = false;
    while (!isSorted)
    {
        isSorted = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(&arr[i], &arr[i + 1]);
                isSorted = false;
            }
        }
    }
}
int main()
{
    int n, m;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    int arrA[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number-" << i + 1 << " of array A" << endl;
        cin >> arrA[i];
    }
    cout << "Enter the value of m :" << endl;
    cin >> m;
    int arrB[m];
    for (int i = 0; i < m; i++)
    {
        cout << "Enter the number-" << i + 1 << " of array B" << endl;
        cin >> arrB[i];
    }
    sortArray(arrA, n);
    sortArray(arrB, m);
    int arrC[n + m];
    //insertion of element of array B in the array A just like insertion sort.
    for (int i = 0; i < n; i++)
    {
        arrC[i] = arrA[i];
    }
    for (int i = n, j = 0; i < (m+n); i++, j++)
    {
        if (arrC[i - 1] > arrB[j])
        {
            int temp, loc;
            temp = arrB[j];
            loc = i;
            while (loc != 0 && arrC[loc - 1] > temp)
            {
                arrC[loc] = arrC[loc - 1];
                loc = loc - 1;
            }
            arrC[loc] = temp;
        }
        else
        {
            arrC[i] = arrB[j];
        }
    }
    cout << "After merging two array :" << endl;
    for (int i = 0; i < (n + m); i++)
    {
        cout << "Number - " << i + 1 << " of array C is " << arrC[i] << endl;
    }
    return 0;
}