#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,bin,i=0,a[32];
    cin>>num;
    
    while(num!=0)
    {
        
            bin=num%2;
            a[i]=bin;
            i++;
            num=num/2;
    }
    for(int j=0;j<i;j++)
    cout<<a[j];
    return 0;
}