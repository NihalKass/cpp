#include<bits/stdc++.h>
using namespace std;

int main(int argc , char *argv[])
{
	int n,f=0;
	n=atoi(argv[1]);
	int i,a=0,b=1;
	cout<<a<<" "<<b<<" ";
	for(i=1;i<=n;i++)
	{
		f=a+b;
		a=b;
		b=f;
		cout<<f<<" ";

	}
	
	return 0;
}

	


