#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num,a[999];
	cout<<"\nEnter the no. of terms in the fibonacci series:\n";
	cin>>num;
	if(num<=1)
	return num;
	
	a[0]=0;
	a[1]=1;
	for(int i=2;i<=num;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	for(int i=0;i<num;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
