#include <iostream>
using namespace std;
int countDigits(int number);
void takeDigitsInArray(int arr[], int number);
void printArray(int arr[], int noOfDigits);
void sortArray(int arr[], int noOfDigitds);
void swap(int *a, int *b);

int countDigits(int number)
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
void sortArray(int arr[], int noOfDigitds)
{
    bool isSorted = false;
    while (!isSorted)
    {
        isSorted = true;
        for (int i = 0; i < noOfDigitds - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(&arr[i], &arr[i + 1]);
                isSorted=false;
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

int main()
{
    int number;
    cout << "Enter the number :" << endl;
    cin >> number;
    int noOfDigits = countDigits(number);
    int arr[noOfDigits];
    takeDigitsInArray(arr, number);
    sortArray(arr, noOfDigits);
    cout<<"Number             frequency"<<endl;
    int frequency;
    int flag;
    for (int i = 0; i < noOfDigits; i++)
    {
        flag=0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j]==arr[i])
            {
                flag=1;
                break;
            }
        }
        if (flag==1)
        {
            continue;
        }
        
        frequency=0;
        for (int j = 0; j < noOfDigits; j++)
        {
            if (arr[j]==arr[i])
            {
                frequency++;
            }
            
        }
        cout<<arr[i]<<"                "<<frequency<<endl;
    }
    return 0;
}