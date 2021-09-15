#include <iostream>

using namespace std;

int main()
{
    int evenCount=0;
    int oddCount=0;
    int initialValue,finalValue;
    cout<<"Enter the initail value of the range : "<<endl;
    cin>>initialValue;
    cout<<"Enter the final value of the range : "<<endl;
    cin>>finalValue;
    for (int i = initialValue; i <= finalValue; i++)
    {
        if (i%2==0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        } 
    }
    cout<<"Odd number between "<<initialValue<<" and "<<finalValue<<" is "<<oddCount<<endl;
    cout<<"Even number between "<<initialValue<<" and "<<finalValue<<" is "<<evenCount<<endl;
    return 0;
}