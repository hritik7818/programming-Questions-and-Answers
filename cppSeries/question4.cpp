#include <iostream>
using namespace std;
int main()
{
    for (int i = 1, j = 1; j <= 50; i++)
    {
        if (i%2!=0)
        {
           cout<<i<<",";
           j++; 
        }
        
    }

    return 0;
}