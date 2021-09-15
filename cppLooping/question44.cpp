#include <iostream>
using namespace std;
int countDigits(int number);
void takeDigitsInArray(int arr[], int number);
void sortArray(int arr[],int noOfDigits);
void swap(int* a,int* b);
int takeNumberFromArray(int arr[],int noOfDigits);
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
void sortArray(int arr[],int noOfDigits){
    bool isSorted=false;
    while (!isSorted)
    {
        isSorted=true;
        for (int i = 0; i < noOfDigits-1; i++)
        {
            if (arr[i]<arr[i+1])
            {
                swap(&arr[i],&arr[i+1]);
                isSorted=false;
            }
        }
    }
}
void swap(int* a,int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int takeNumberFromArray(int arr[],int noOfDigits){
    int number=0;
    for (int i = 0; i < noOfDigits; i++)
    {
        number=number*10+arr[i];
    }
    return number;
}

int main()
{
    int number;
    cout << "Enter the number :" << endl;
    cin >> number;
    int noOfDigits = countDigits(number);
    int arr[noOfDigits];
    takeDigitsInArray(arr, number);
    sortArray(arr,noOfDigits);
    int largestNumber=takeNumberFromArray(arr,noOfDigits);
    cout<<"Largest number formed from "<<number<<" is "<<largestNumber<<endl;
    return 0;
}