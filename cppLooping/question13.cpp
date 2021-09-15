//LCM - least common multiple.
//HCF - highest common factor.
#include <iostream>
using namespace std;
int main()
{
    int number1,number2;
    cout<<"Enter the number 1:"<<endl;
    cin>>number1;
    cout<<"Enter the number 2 :"<<endl;
    cin>>number2;
    //finding LCM
    int leastCommonMultiple;
    for (int i = 1; true; i++)
    {
        if (i%number1==0&&i%number2==0)
        {
            leastCommonMultiple=i;
            break;
        } 
    }
    cout<<"LCM of "<<number1<<" and "<<number2<<" is "<<leastCommonMultiple<<endl;
    // finding HCF
    int highestCommonfactor;
    for (int i = 1; i <= number1; i++)
    {
        if (number1%i==0&&number2%i==0)
        {
            highestCommonfactor=i;
        }
    }
    cout<<"HCF of "<<number1<<" and "<<number2<<" is "<<highestCommonfactor<<endl;
    return 0;
}