#include<iostream>
using namespace std;

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

void selectionSort(int arr[],int n)
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    display(arr,n);
}
int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    selectionSort(arr,n);
}
