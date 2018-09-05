#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int p=5;
	    while(p>0)
	    {
    	    int n;
    	    cin>>n;
    	    int sum=0,temp=0,rem=0;
    	    temp=n;
    	    
    	    rem=n%10;
    	    n=n/10;
    	    sum += sum*10+rem;
    	    
    	    if(temp==n)
    	    {
    	        cout<<sum<<endl;
    	        break;
    	    }
    	        else
    	        {
    	        n=sum+temp;
	            }
	    }
	    cout<<"-1"<<endl;
	}
	return 0;
}