#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    cout<<"Perfect numbers between 1 to "<<n<<" is ";
    int sum;
    for (int i = 1; i <= n; i++)
    {
        sum=0;
        for (int j = 1; j < i; j++)
        {
            if (i%j==0)
            {
                sum=sum+j;
            }
        }
        if (sum==i)
        {
            cout<<i<<",";
        }
    }

    return 0;
}