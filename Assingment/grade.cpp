

int main(int argc , char *argv[])
{
	int  a[20];
	int b[20],max=0,temp=0,sum=0,avg=0,a;
	//cout<<"Enter 20 names with respective grade range between 0-100" <<endl;
	
	for(int i=21;i<=40;i++)
	{
		b[i]=atoi(argv[i]);
	}
	for(int i=21;i<=40;i++)
	{
		sum+=b[i];
	}
	avg=sum/20;
	cout<<"Average of the grade is:"<<avg<<endl;

	for(int i=21;i<=40;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
			int a=max;
		}
	}
	cout<<"Highest grade scored is:"<<max<<endl;

