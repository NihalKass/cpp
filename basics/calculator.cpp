#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,sum,sub,n;
    cout<<"enter 1st & 2nd no.";
    cin>>a>>b;
    while(1)
    {
        cout<<"Enter the choice"<<"endl"<<"1.ADD"<<" "<<"2.SUB"<<"3.END";
        cin>>n;
        switch (n)
        {
            case 1:
            sum = a+b;
            cout<<sum<<endl;
            break;

            case 2:
            sub =  a-b;
            cout<<sub<<endl;
            break;

            case 3:
            exit (0);
            break;

            default:
            cout<<"INVALID INPUT"<<endl;    
        }
    }
    return 0;
}