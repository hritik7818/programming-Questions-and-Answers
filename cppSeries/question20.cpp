#include <iostream>
using namespace std;
int main()
{
    int initialValue=2;
    for (int i = 1; i <= 20; i++)
    {
        if (i==20)
        {
            cout<<initialValue;
        }
        else
        {
            cout<<initialValue<<",";
        }
        initialValue=initialValue*2;
    }
    
    return 0;
}