#include<bits/stdc++.h>
using namespace std;

void gp1(int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=1*pow(2,n-1);
    }
    cout<<sum;
}

void gp2(int n)
{
    int value2=0;
    for(int i=0;i<n;i++)
    {
        value2=1*pow(3,n-1);
    }
    cout<<value2;
}
int main()
{
    int num;
    cin>>num;
    if(num%2==0)
    gp1(num/2);
    else
    gp2(num/2+1);

    return 0;
}
