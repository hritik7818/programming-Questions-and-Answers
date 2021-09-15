#include <iostream>
using namespace std;
int main()
{
    int initialValue=1;
    for (int i = 0; i < 30; i++)
    {
        if (i==29)
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