#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size";
    cin>>n;
    int str[n];
     cout<<"enter char";
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    str[n] = '\0';
    string str2 = str;
    cout<<str2;
    return 0;
}