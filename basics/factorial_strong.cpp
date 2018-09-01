#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int sum=0;
    while(n!=0)
    {
        int digit=n%10,f=1;
        n=n/10;
        for(int i=1;i<=digit;i++)
        {
            f *= i;
            
        }
        sum += f;
    }
    return sum;
}

int main()
{
    int num,temp;
    cin>>num;
    int value=0;
    value = fact(num);
    if(value==num)
       cout<<"YES"<<endl;
    else
        cout<<"NO";
    
}