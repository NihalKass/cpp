#include<bits/stdc++.h>
using namespace std;

void fabonacii(int n)
{
    int a=0,b=1,c;
    for(int i=1;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
     }
    cout<<c<<endl;
}

void prime(int n)
{
    int i, j, flag, count =0,MAX=1000;
    for (i=2; i<=MAX; i++)
    {
        flag = 0;
        for (j=2; j<i; j++)
        {
            if(i%j == 0)
            {
                flag = 1;
                break;
            }
        }
        
        if (flag == 0)
            count++;
        if(count == n)
        {
            cout<<i<<endl;
            break;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    if(n%2!=0)
        fabonacii(n/2+1);
    else
        prime(n/2);
    
    return 0;
}


    