#include <iostream>
using namespace std;
int main()
{
    int i=0,difference=3,j=1;
    while (j<=25)
    {
        if (j==25)
        {
            cout<<i;
        }
        else
        {
            cout<<i<<",";
        }
        i=i+difference;
        difference=difference+2;
        j++;
    }
    
    return 0;
}