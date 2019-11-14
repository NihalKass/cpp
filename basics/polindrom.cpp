#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,rev=0;
    cin>>num;

    int n=num;

    while(num!=0)
    {
    //rev=rev*10;
    rev=rev*10 +num%10;
    num = num/10;
    }
    if(rev==n)
        cout<<"polindrom";
    else
        cout<<"not polindrom";
return 0;
}