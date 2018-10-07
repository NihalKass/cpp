#include<bits/stdc++.h>
using namespace std;

void display(vector<int> v1)
{
    if(v1.size()==0)
    cout<<"Vector is empty\n";
    else
    {
        for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    }
}

int main()
{
    int n,a,k,count=0; 
    vector<int>v1;
    while(1)
    { 
        cout<<"\n 1.Insert elemet \n 2.Delete element \n 3.Delete at position \n 4.Insert Element position \n 5.Empty vector \n 6.Exit\n";
        cin>>n;
        switch(n)
        {
            case 1:
                cout<<"Enter the element\n";
                cin>>a;
                v1.push_back(a);
                display(v1);
                break;

            case 2:
                cout<<"Enter the element\n";
                cin>>a;
                for(int i=0;i<v1.size();i++)
                {
                    if(a==v1[i]){
                    k=i;
                    count=1;
                    }
                    break;
                }
                if(count==0)
                cout<<"Element not found";
                else
                v1.erase(v1.begin()+k);
                display(v1);
            break;    

            case 3:
                cout<<"Enter position\n";
                cin>>a;
                if(a>v1.size())
                cout<<"Entered index is Invalid";
                else
                v1.erase(v1.begin()+a);
                display(v1);
            break;

            case 4:
                cout<<"Enter position and Element\n";
                cin>>k>>a;
                if(a>v1.size())
                cout<<"Entered index is Invalid";
                else
                v1.insert(v1.begin()+a,k); 
                display(v1); 
            break;

            case 5:
                v1.clear();
                display(v1);
            break;
            case 6:
                exit(0);
            break;
        }

    }
    return 0;
}
