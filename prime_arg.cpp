#include<bits/stdc++.h>
using namespace std;

int main(int argc , char *argv[])
{
	int n,i,count=0;
	n=atoi(argv[1]);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		cout<<n<<" is a Prime No.";
	}
	else
	{
		cout<<n<<" is not a Prime No.";
	}
	
	return 0;

}

	

