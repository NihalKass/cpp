#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter any no.";
	cin>>n;
	
	int count=0,k=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			count++;
		}
		if(count==2)
		{
			cout<<i<<" ";
		}
		count=0;
	}
	return 0;
}