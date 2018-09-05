#include<iostream>
#include<stack>
using namespace std;

int main(int argc , char *argv[])
{
	int a;
	stack<int> s;
	a=atoi(argv[1]);
	while(a)
	{ 
		if(a%2==0)
			s.push(0);
		else
			s.push(1);
		a=a/2;
	}
	cout<<"Value in binary:";
	while(!s.empty())
	{
		cout<<s.top();
		s.pop();
	}
	return 0;
}

