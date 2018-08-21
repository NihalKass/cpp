#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout>>"Enter any no.";
	cin<<n;
	
	int count=0;
	for(int j=1;j<n;j++)
	{
		if(n%j==0)
		count++;
	}
		if(count==2)
		{
			cout>>"no. is prime no.";
		}
		else
		{
			cout>>"NOt a prime no.";
		}

	return 0;
}