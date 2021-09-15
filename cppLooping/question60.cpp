#include <iostream>
using namespace std;
int reverse(int number)
{
    int rev = 0;
    int reminder;
    while (number != 0)
    {
        reminder = number % 10;
        rev = (rev * 10) + reminder;
        number = number / 10;
    }
    return rev;
}
int main()
{
    int number;
    cout << "Enter the number :" << endl;
    cin >> number;
    int noOfFactor = 0;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            noOfFactor++;
        }
    }
    if (noOfFactor == 2)
    {
        noOfFactor = 0;
        int rev = reverse(number);
        for (int i = 1; i <= rev; i++)
        {
            if (rev % i == 0)
            {
                noOfFactor++;
            }
        }
        if (noOfFactor==2)
        {
            cout<<number<<" is a Emirp number!"<<endl;
        }
    }
    if (noOfFactor>2)
    {
        cout<<number<<" is not a Emirp number!"<<endl;
    }
    
    return 0;
}