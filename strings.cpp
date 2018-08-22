#include<bits/stdc++.h>
using namespace std;

bool alphabets(string str ,int size)
{
    char alp[26];
    int n=97;
    for(int i=0;i<26;i++)
    {
        alp[i]= n;
        n++;
    }
    for(int i=0;i<26;i++)
    {
      for(int j=0;j<size;j++)
      {
          if(str[j]==alp[i])
          str[j]=true;
      }
    }
    for(int k=0;k<26;k++)
    {
        if(alp[k]==false)
        {
            break;
            return false;
        }
        else
        {
            return true;
        }
    }

    
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int value=0;
        string str;
        cin>>str;
        int size=str.size();
        if(size == 26)
        {
            value=alphabets(str , size);
        }
        if(value == 1)
        {
            cout<<"YES"<<endl;
            }
            else
            {
            cout<<"NO"<<endl;
            }
        }

        return 0;
    }
