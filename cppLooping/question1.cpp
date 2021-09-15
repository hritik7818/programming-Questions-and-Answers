#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number :"<<endl;
    cin>>number;
    cout<<"All factor of "<<number<<" is ";
    for (int i = 1; i <= number; i++)
    {
        if (number%i==0)
        {
            if (i==number)
            {
                cout<<i<<".";
            }
            else
            {
                cout<<i<<",";;
            }
            
        }
    }
    return 0;
}