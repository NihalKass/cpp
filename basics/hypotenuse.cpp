#include<bits/stdc++.h>
using namespace std;

int main(int argc , char *argv[])
{
	int a,b,num;
	float h;
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	num=(a*a)+(b*b);
	h=sqrt(num);
	std::cout << std::fixed << std::setprecision(2) << h;
	return 0;
}



