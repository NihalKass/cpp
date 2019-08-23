//Your C++ Proram will come here//
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp=0,rev=0,temp2=0;
    cin>>n;
    temp = n%10;
    temp2 = n/10;
    rev = temp*10 + temp2;
    cout<<rev;
    return 0;
}