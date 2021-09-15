#include <iostream>
using namespace std;
int takeNumberInAccendingOrder(int arr[],int noOfDigits){
    int number=0;
    for (int i = 0; i < noOfDigits; i++)
    {
        number=number*10+arr[i];
    }
    return number;
}
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
int countDigit(int num)
{
    int count = 0;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    return count;
}
void takeNumberInArray(int num, int arr[])
{
    int i = 0;
    while (num != 0)
    {
        int rem;
        rem = num % 10;
        arr[i] = rem;
        num = num / 10;
        i++;
    }
}
int main()
{
    int number,arrangedNumber;
    cout << "Enter the number :" << endl;
    cin >> number;
    int noOfDigits = countDigit(number);
    int arr[noOfDigits];
    takeNumberInArray(number, arr);
    sortArray(arr, noOfDigits);
    arrangedNumber=takeNumberInAccendingOrder(arr,noOfDigits);
    cout<<number<<" digits arranged accending order : "<<arrangedNumber<<endl;
    return 0;
}