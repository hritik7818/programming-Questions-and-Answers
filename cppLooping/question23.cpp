#include <iostream>
using namespace std;
int main()
{
    int number,reminder;
    cout<<"Enter the number :"<<endl;
    cin>>number;
    cout<<"Cube of each digits of "<<number<<" are ";
    while (number!=0)
    {
        reminder=number%10;
        cout<<reminder*reminder*reminder<<",";
        number=number/10;
    }
    
    return 0;
}