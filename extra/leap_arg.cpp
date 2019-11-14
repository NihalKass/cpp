#include<bits/stdc++.h>
using namespace std;

int main(int argc , char *argv[])
{
	int y;
	y = atoi(argv[1]);
	
	if(y%4==0)
	{
		if(y%100==0)
		{
			if (y%400==0)
				cout<<y<<" Is a leap year";
			else
				cout<<y<<" Is not a leap year";
		}
		else
			cout<<y<<" Is a leap Year";
	}
	else 
		cout<<y<<" Is not a leap year";
	
	return 0;
}

			
