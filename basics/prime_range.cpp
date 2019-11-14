#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the range of no."<<endl;
    cin>>a>>b;

    for(int i = a+1; i<b; i++)
    {
       int  prime = 1;
       for(int j=2; j<i/2; j++)
       if(i%j == 0)
       {
         prime = 0;
         break;
       }
       if(prime)
       printf("\t%d", i);
    }
    return 0;
}




