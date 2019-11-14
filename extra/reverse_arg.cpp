#include<iostream>
using namespace std;

int main(int argc , char *argv[])
{
	int m=0,n,rev=0;
	n=atoi(argv[1]);
	while(n)
	{
		m=n%10;
		rev=rev*10+m;
		n=n/10;
	}
	cout<<"Reverse no.:"<<rev;
	
	return 0;
}


