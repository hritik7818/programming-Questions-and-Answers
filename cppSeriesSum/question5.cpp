#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int initailValue = 1;
    int difference = 6;
    for (int i = 1; i <= 25; i++)
    {
        sum = sum + initailValue;
        initailValue = initailValue + difference;
    }
    cout << "sum = " << sum << endl;
    return 0;
}