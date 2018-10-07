#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
     stack<int>s;
    cout<<"1.Insert_Element\n 2.Delete_Element\n 3.Display_Element\n 4.Delete element at position\n 5.EXIT"<<endl;
    while(1)
    {
        cout<<"\n Enter the option for stack implementation"<<endl;
        cin>>n;
        switch (n)
        {
            case 1:
            cin>>a;
            s.push(a);
            break;

            case 2:
            s.pop();
            break;

            case 3:
            if(s.empty())
            cout<<"stack is empty"<<endl;
            else
            {
                while(!s.empty())
                {
                   // cout<<"*";
                    cout<<s.top()<<" ";
                    s.pop();
                }
            }
            break;

            case 5:
            exit(0); 
            break;
        }
    }
    
}