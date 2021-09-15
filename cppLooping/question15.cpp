#include <iostream>
using namespace std;
int main()
{
    int baseNumber,powerNumber;
    cout<<"Enter the base number :"<<endl;
    cin>>baseNumber;
    cout<<"Enter the power number :"<<endl;
    cin>>powerNumber;
    int resultValue=1;
    for (int i = 0; i < powerNumber; i++)
    {
        resultValue=resultValue*baseNumber;
    }
    cout<<baseNumber<<" raise to the power "<<powerNumber<<" is "<<resultValue<<endl;
    return 0;
}