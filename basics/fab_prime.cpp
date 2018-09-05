#include<bits/stdc++.h>
using namespace std;

void fab(int n)
{
    int a,b,c,max=1000;
    a=0,b=1;
    for(int i=1;i<n;i++)
    {
        c=a+b;
        a=b;
        b=a;
    }
    cout<<c;
}

void prime(int n)
{
    int flag=0,count=0,max=1000;
    for(int i=2;i<max;i++)
    {
        for(int j=i;j<i;j++)
        {
          if(i%j==0)
          {
            flag=1;
            break;
          }
        }
        if(flag==1)
        count++;

        if(count==n)
        {
            cout<<n;
        }
    }
}
int main()
{
    int n;
    cin>>n;

    if(n%2==0)
    {
        fab(n/2+1);
    }
    else
    {
        prime(n/2);
    }
    return 0;
}