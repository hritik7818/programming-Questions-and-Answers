#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,n;
    cout<<"Enter the value of x :"<<endl;
    cin>>x;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    float sum=0;
    float factorial;
    for (int i = 2; i <=n ; i++)
    {
        factorial=1;
        for (int j = i-1; j >0; j--)
        {
            factorial=factorial*j;
        }
        sum=sum+(pow(x,i)/factorial);
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}