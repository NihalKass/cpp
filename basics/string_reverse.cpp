#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout<<"Enter any word"<<endl;
    cin>>str;

    int temp = str.length();

    for(int i=temp-1; i>=0; i--)
    {
        cout<<str[i];
    }
    return 0;
}