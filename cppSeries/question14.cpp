#include <iostream>
using namespace std;
int main()
{
    int initialValue=2;
    int difference=3;
    for (int i = 0; i < 25; i++)
    {
        if (i==24)
        {
         cout<<initialValue;   
        }
        else
        {
            cout<<initialValue<<",";
        }
        initialValue=initialValue+difference;
        difference=difference+2;
    }
    
    return 0;
}