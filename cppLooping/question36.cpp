#include <iostream>
using namespace std;
int reverseNumber(int number){
    int reverse=0;
    while (number!=0)
    {
        reverse=(reverse*10)+(number%10);
        number=number/10;
    }
    return reverse;
}
int main()
{
    int number,reminder;
    cout<<"Enter the number :"<<endl;
    cin>>number;
    number= reverseNumber(number);
    while (number!=0)
    {
        reminder=number%10;
        cout<<"Factor of "<<reminder<<" is ";
        for (int i = 1; i <= reminder; i++)
        {
            if (reminder%i==0&&i==reminder)
            {
                cout<<i;
            }
            else if(reminder%i==0){
                cout<<i<<",";
            }
        }
        cout<<endl;
        number=number/10;
    }
    return 0;
}