#include<bits/stdc++.h>
using namespace std;

void gcd(int n, int a, int b)
{
     for(int i=n;0<i;i--)
    {
        if((a%i==0) && (b%i==0))
        {
            cout<<i<<endl;
            break;
        }
    }
}
void lcm(int a,int b)
{
    int n= max(a,b);
    int lcm=1;
    for(int j=1;j<=n;j++)
    {
        if(a%j==0 && b%j==0)
        {
            lcm =lcm*j;
            a=a/j;
            b=b/j;
        }
    }
    cout<<lcm*a*b<<endl;
}
int main()
{
    int a,b,n;
    cin>>a>>b;
    n=min(a,b);
    gcd(n,a,b);
    lcm(a,b);

   
    return 0;
}