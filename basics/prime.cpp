#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cout<<"Enter any no."<<endl;
    cin>>n;

    for(int i=i;i<n;i++)
    {
        if(n%i==0)
        count++;
    }

    if(count == 2)
    {
        cout<<n<<"Prime no."<<endl;
    }
        else
    {
        cout<<n<<"Not a prime no."<<endl;
    }
    return 0;
}