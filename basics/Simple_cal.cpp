#include<bits/stdc++.h>
using namespace std;

void sum(int x,int y)
{
    int temp=0;
    temp = x + y;
    cout<<temp;
}

void sub(int x,int y)
{
    int temp=0;
    temp = x - y;
    cout<<temp;
}

void mul(int x,int y)
{
    int temp=0;
    temp = x * y;
    cout<<temp;
}

int main()
{
    int a,b,num=0;
    cout<<"Enter any two no.";
    cin>>a>>b;
    cout<<"1.sum; 2.sub; 3. mul";
    cin>>num;

    if(num==1)
    sum(a,b);
    else if(num==2)
    sub(a,b);
    else
    mul(a,b);

    return 0;
}
