#include <iostream>
using namespace std;
int main()
{
    long long initialValue=1;
    for (int i = 0; i < 20; i++)
    {
        if (i==19)
        {
            cout<<initialValue;
        }
        else
        {
            cout<<initialValue<<",";
        }
        initialValue=initialValue*5;
    }
    
    return 0;
}