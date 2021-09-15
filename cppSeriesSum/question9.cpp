#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    for (int i = 1; i <= 25; i++)
    {
        sum = sum + ((i * i * i)+1);
    }
    cout << "sum = " << sum << endl;
    return 0;
}