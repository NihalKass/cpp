#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
};

 struct node* head=NULL;

/* node* insert(int n)
{
    int num;
    while(n--)
    {
        cout<<"enter data";
        cin>>num;
        struct node *temp,*t;
        temp = (struct node*)malloc(sizeof(struct node*));
        temp->data=num;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            t=head;
            while(t!=NULL)
            t=t->next;
        }
    }
    return head;
}*/
node* insert(int n)
{
    int data;
    while(n--)
    {
        cin>>data;
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->data = data;
        temp->next = head;
        head = temp;
        return head;
    }
}
void display()
{
    struct node *temp1;
    if(head==NULL)
    {
        cout<<"list is empety"<<endl;
    }
    else
    {
        temp1 = head;
        while(temp1!=NULL)
        {
            cout<<"No. that consist in list"<<endl;
            cout<<temp1->data<<endl;
            temp1=temp1->next;
       }
    }
}



int main()
{
    int num;
   
    cout<<"enter data";
    cin>>num;
    insert(num);
    display();

    return 0;
}