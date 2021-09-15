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
int countDigit(long long int num)
{
    int count = 0;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    return count;
}
int main()
{
    long long int num;
    cout << "Enter the number : " << endl;
    cin >> num;
    int digitCounter = countDigit(num);
    int arr[digitCounter];
    int i = 0;
    while (num != 0)
    {
        int rem = num % 10;
        arr[i] = rem;
        num = num / 10;
        i++;
    }
    sortArray(arr, digitCounter);
    int frequency;
    int flag;
    cout << "Number           Frequency" << endl;
    for (int i = 0; i < digitCounter; i++)
    {
        flag = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            continue;
        }
        frequency = 0;
        for (int j = 0; j < digitCounter; j++)
        {
            if (arr[j] == arr[i])
            {
                frequency++;
            }
        }
        cout << arr[i] << "          " << frequency << endl;
    }
    return 0;
}