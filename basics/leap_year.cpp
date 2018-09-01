#include<bits/stdc++.h>
using namespace std;

int main (int argc , char *argv[])
{
    int n;
    n=atoi(argv[1]);
    if(n%100==0)
    {
        if(n%400==0)
        {
            cout<<"It is leap year";
        }
            else
            {
            cout<<"Not a leap year";
            }
     }
            else if(n%4==0)
            {
                cout<<"It is leap year";
            }
            else
            {
                cout<<"Not a leap year";
            }
    return 0;
}