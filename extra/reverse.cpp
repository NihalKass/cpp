#include<iostream>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	int sum1=0,sum2=0,a,b,i;
	
	for(i=1;i<=argc;i++)
	{
		a=atoi(argv[i]);
		if(a%2==0)
		{
			sum1+=a;
			
		}
		else
		{
			sum2+=a;
			
		}
	}
	cout<<"Even_Sum :"<<sum1<<"\nOdd Sum :"<<sum1;

}


		  


