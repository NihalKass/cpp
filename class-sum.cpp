#include<bits/stdc++.h>
using namespace std;

class number
{
	private:
		int num1,num2;
	public:
		void input()
		{
			cout<<"Enter any two no.";
			cin>>num1>>num2;
		}
		void output()
		{
			int sum2=0;
			sum2=num1+num2;
			cout<<endl<<sum2;
		}
};

int main()
{
	 number sum1;
	 sum1.input();
	 sum1.output();
}


