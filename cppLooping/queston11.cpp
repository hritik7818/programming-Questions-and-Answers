#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number : "<<endl;
    cin>>number;
    int count=0;
    for (int i = 1; i <= number; i++)
    {
        if (number%i==0&&i%2!=0)
        {
            count++;
        }
    }
    cout<<"Number of odd factor of "<<number<<" is "<<count<<endl;
    return 0;
}