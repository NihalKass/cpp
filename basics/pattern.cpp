#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=1,k=1;
    cin>>n;
    int temp=n;
    while(n--)
    {
        for(int j=n;j>0;j--)
        {
            cout<<" ";
        }
            for(int i=0;i<count;i++)
            {
                cout<<k++<<" ";
            }
            cout<<endl;
            count++;
    }

    while(temp--)
    {
        int count=1;
        for(int j=0;j<=count;j++)
        {
            cout<<"";
        }
        count++;
        for(int i=0;i<temp;i++)
        {
            cout<<k++<<" ";
        }
        cout<<endl;
    }
}