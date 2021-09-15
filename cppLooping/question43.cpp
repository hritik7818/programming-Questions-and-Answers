#include <iostream>
using namespace std;
int countDigit(int number);
void takeDigitsInArray(int arr[], int number);
void sortArray(int arr[], int noOfDigits);
void swap(int *a, int *b);
void moveZerosToSecondPlace(int arr[], int noOfdigits);
int takeNumberFromArray(int arr[], int noOfDigits);
int countDigit(int number)
{
    int count = 0;
    while (number != 0)
    {
        number = number / 10;
        count++;
    }
    return count;
}
void takeDigitsInArray(int arr[], int number)
{
    int i = 0;
    while (number != 0)
    {
        arr[i] = number % 10;
        number = number / 10;
        i++;
    }
}
void sortArray(int arr[], int noOfDigits)
{
    bool isSorted = false;
    while (!isSorted)
    {
        isSorted = true;
        for (int i = 0; i < noOfDigits - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(&arr[i], &arr[i + 1]);
                isSorted = false;
            }
        }
    }
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void moveZerosToSecondPlace(int arr[], int noOfDigits)
{
    int minimum, minimumNoIndex;
    for (int i = 0; i < noOfDigits; i++)
    {
        if (arr[i] != 0)
        {
            minimum = arr[i];
            break;
        }
    }
    for (int i = 0; i < noOfDigits; i++)
    {
        if (arr[i] <= minimum && arr[i] != 0)
        {
            minimum = arr[i];
            minimumNoIndex = i;
        }
    }
    int temp = arr[minimumNoIndex];
    for (int i = minimumNoIndex; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}
int takeNumberFromArray(int arr[], int noOfDigits)
{
    int number = 0;
    for (int i = 0; i < noOfDigits; i++)
    {
        number = (number * 10) + arr[i];
    }
    return number;
}
int main()
{
    int number;
    cout << "Enter the number :" << endl;
    cin >> number;
    int noOfDigits = countDigit(number);
    int arr[noOfDigits];
    takeDigitsInArray(arr, number);
    sortArray(arr, noOfDigits);
    moveZerosToSecondPlace(arr, noOfDigits);
    int smallestNumber = takeNumberFromArray(arr, noOfDigits);
    cout << "Smallest number formed from " << number << " is " << smallestNumber << endl;
    return 0;
}