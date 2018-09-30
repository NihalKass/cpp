#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int l,int u,int x)
{
    int mid=0;
    if(u>=l)
    {
        mid = l+(u-l)/2;
    }
    if(arr[mid] == x)
        return mid;

    if(arr[mid > x]){
        return binary_search(arr, l, mid-l, x );  
    }
    else{
        return binary_search(arr, l, mid+l, x ); 
    }
    return -1;      
}

int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elemetnt in array"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int x;
    cout<<"enter element to search"<<endl;
    cin>>x;
    int l=0,u=n;

    int result = binary_search(arr,l,u,x);
    if(result == -1)
    cout<<"No.Not found";
    else
    cout<<"No.found";
}