#include<bits/stdc++.h>
using namespace std;

int main(int argc , char *argv[])
{
	int n,i;
	n=atoi(argv[1]);
	cout<<"Factorial of "<<n<<" : ";
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				cout<<i<<" " ;
			
			}
		}
		
		return 0;
}



