#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number : "<<endl;
    cin>>number;
    int sum;
    do
    {
        sum=0;
       while (number!=0)
       {
           sum=sum+number%10;
           number=number/10;
       }
       number=sum;
    } while (sum>=10);
    cout<<"Sum = "<<sum<<endl;
    if (sum==1)
    {
        cout<<number<<" is a magic number"<<endl;
    }
    else
    {
        cout<<number<<" is not a magic number"<<endl;
    }
    
    return 0;
}