#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

struct node* head=NULL;
/*struct node* createnode()
{
    struct node* n = (struct node*)malloc(sizeof(struct node*));
    return(n);
}
*/
void deletenode()
{
    struct node *temp;
    if(head==NULL)
    {
        cout<<"List is empety"<<endl;
    }
    else
    {
        temp=head;
        head=head->next;
        free(temp);
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

void insert(int num)
{
    struct node *temp,*t;
    struct node* temp = (struct node*)malloc(sizeof(struct node*));
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

        t->next=temp;
    }
}

int main()
{
    int num,n;
    while(1)
    {
        cout<<"Enter the choice"<<endl;
        cout<<"1.INSERT NODE "<<endl<<"2. DELETE NODE"<<endl<<"3.TRANSVERSE NODE"<<endl<<"4.EXIT"<<endl;
        cin>>num;
        switch (num)
        {
            case 1:
            cout<<"Enter the element"<<endl;
            cin>>n;
            insert(n);
            break;

            case 2:
            deletenode();
            break;            

            case 3:
            display();
            break;

            case 4:
            exit(0);

            default:
            cout<<"INVALID INPUT";
        }
    }


}
