#include<iostream>
using namespace std;

int main(int argc , char *argv[])
{
	int i=0,a,b,sum1=0,sum2=0;
	a=atoi(argv[1]);
	b=atoi(argv[2]);

	for(i=a;a<=b;i++)
	{
		if(a%2==0)
		{
			sum1+=a;
			a++;
		}
		else
		{
			sum2+=a;
			a++;
		}
	}
	cout<<"Even sum :"<<sum1<<"\nOdd Sum :"<<sum2;
	
	return 0;
}


