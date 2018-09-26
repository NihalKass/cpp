#include<iostream>
using namespace std;

int main()
{
    int n,a,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    cin>>a;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==a);
        count=1;
    }
    if(count==1)
    cout<<"Element found"<<endl;
    else
    cout<<"Not Element found"<<endl;
}