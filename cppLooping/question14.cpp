#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter the number :" << endl;
    cin >> number;
    int factorial=1;
    for (int i = number; i > 0; i--)
    {
        factorial=factorial*i;
    }
    cout<<"Factorial of "<<number<<" is "<<factorial<<endl;
    return 0;
}