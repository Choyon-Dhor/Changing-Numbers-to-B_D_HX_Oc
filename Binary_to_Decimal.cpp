#include <bits/stdc++.h>
using namespace std;

int Binary_to_Decimal(int n)
{
    int x=1,ans=0;
    while (x<=n)
    {  
        x*=2;  
    }
    x/=2;
    while (x>0)
    {
        int rem=n/x;
        n-= rem*x;
        x/=2;
        ans= ans*10+rem;
    }
    return ans;
    
}
int main()
{
    int n;
    cin>>n;
    cout<<Binary_to_Decimal(n)<<endl;

}
