#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    int previousValue = 1;
    int nextValue = 4;
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            cout << nextValue;
        }
        else if (i == 0)
        {
            cout << previousValue << ",";
        }
        else
        {
            cout << nextValue << ",";
            nextValue=nextValue+previousValue;
            previousValue=nextValue-previousValue;
        }
    }

    return 0;
}