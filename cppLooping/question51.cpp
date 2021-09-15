#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    cout<<"All Magic number between 1 to "<<n<<" is ";
    for (int i = 1; i <= n; i++)
    {
        int iCopy = i;
        int sum;
        do
        {
            sum=0;
            while (iCopy != 0)
            {
                sum=sum+(iCopy%10);
                iCopy=iCopy/10;
            }
            iCopy=sum;
        } while (sum >= 10);
        if (sum==1)
        {
            cout<<i<<",";
        }
    }

    return 0;
}