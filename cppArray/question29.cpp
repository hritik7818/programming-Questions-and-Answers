#include <iostream>
using namespace std;
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
int main()
{
    int num;
    cout << "Enter the number : " << endl;
    cin >> num;
    int originalNumber=num;
    int digitCounter = countDigit(num);
    int arr[digitCounter];
    int i = 0;
    while (num != 0)
    {
        int rem;
        rem = num % 10;
        arr[i] = rem;
        num = num / 10;
        i++;
    }
    int flag = 0;
    for (int i = 0; i < digitCounter; i++)
    {
        int frequency = 0;
        for (int j = 0; j < digitCounter; j++)
        {
            if (arr[j] == arr[i])
            {
                frequency++;
                if (frequency > 1)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
    if (flag == 1)
    {
        cout << originalNumber << " is not a unique number." << endl;
    }
    else
    {
        cout << originalNumber << " is a unique number." << endl;
    }
    return 0;
}