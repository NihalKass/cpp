#include<iostream>
using namespace std;

int main()
{
	int temp,size;
	cout<<"\nEnter the size of array:\n";
	cin>>size;
	int a[size];
	cout<<"\nEnter the elements into array:\n";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"\nArray in ascending order is:\n";
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(a[i]>=a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;	
			}
		}
	}
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\nArray in descending order is:\n";
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;	
			}
		}
	}
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}