#include<bits/stdc++.h>
using namespace std;

struct node							//structure for linked list
{
	int data;
	struct node* next;
};

struct node* head=NULL;				//head is initialize with null
int length_node()					//transverse of linked list
{
	int count=0;
	struct node*p=head;
	while(p!=NULL)
	{
	count++;
	p=p->next;
	}
	return count;
}
struct node* create()				//created node and initialize memory for the data storage using malloc non continues
{
 struct node* Node=(struct node*)malloc(sizeof(struct node));
 return Node;
}
void insert_node_begning(int a)		//insert any node at begining
{
	struct node* Node=create();
	Node->data=a;
	Node->next=NULL;
	
	if(head==NULL)
	{
		head=Node;
	}
	else
	{
		Node->next=head;
		head=Node;
	}
}
void insert_node_position(int a , int m)	//insert node at any specific postion 
{
	struct node* Node=create();
	Node->data=a;
	Node->next=NULL;
	struct node* p = head;

	int length=length_node();
	if(length<m)
	cout<<"Input position is greater then lenth of linked list"<<endl;
	else
	{
	while(m--)
	{
		p=p->next;
	}
	 p->next=Node;
	 p=Node;
	}
}
void insert_node_last(int a)		//insert node at the last of the linked list
{
	struct node* Node=create();
	Node->data=a;
	Node->next=NULL;
	if(head==NULL)
	{
	 head=Node;
	}
else
{
	struct node* p=head;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=Node;
}
}

void display()						//display linked list
{
	struct node* p=head;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}

int main()					//main function or driver 
{
	int n,a,b=0;
	while(1)
	{
		cout<<"\nselect options for linked list\n 1.Enter node at 1st\n 2.Enter node at any fixed\n 3.Enter node at last\n 4.display\n 5.EXIT"<<endl;
	    cin>>n;
		switch (n)
		{
			case 1:
			cin>>a;
			insert_node_begning(a);
			break;
			case 2:
			cin>>a;
			cin>>b;
			insert_node_position(a , b);
			break;
			case 3:
			cin>>a;
			insert_node_last(a);
			break;
			case 4:
			display();
			break;
			case 5:
			exit(0);
		}
	}
}
