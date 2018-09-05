#include<bits/stdc++.h>
using namespace std;

int main(int agrc , char*argv[])
{
	int size,i=0;
	char array[10];
	
	size = atoi(argv[1]);
	int j = size;
	while(size--)
	{
		array[i]=atoi(argv[i+2]);
		i++;
	}
	
	while(j>0)
	{
		cout<<array[j-1];
		j--;
	}
	return 0;
}




