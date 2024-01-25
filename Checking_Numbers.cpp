#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
void Prime(int n);
void Check_armstrong(int n)
{
    
    int original=n,sum=0;
    while (n>0)
    {
        int reminder=n%10;
        sum+= (reminder* reminder *reminder);
        n/=10;
    }
    if (original ==sum)
    {
        cout<<"Armstrong Number"<<endl;
    }
    else
    cout<<"Not Armstrong Number"<<endl;

}
int main()
{
    int n;
    cin>>n;
    char ch;
    cout<<"What do you want to check?\nIf Armstrong then enter A , if Prime then P"<<endl;
    cin>>ch;
    switch (ch)
    {
    case 'P':
        Prime(n);
        break;
    case 'A':
        Check_armstrong(n);
    }
    return 0;
}
void Prime(int n)
{
    bool flag=0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
            flag=1;
            cout<<"Not Prime"<<endl;
            break;
        }
    }
    if (flag==0)
    {
        cout<<"Prime Number"<<endl;
    }
}
