#include<iostream>
#include<stdlib.h>
using namespace std;

struct node 
{
	int data;
	struct node*left;
	struct node *right;
};
typedef struct node tree;
tree*root=NULL;
int data;
void create_tree();
tree*temp=NULL;

tree*gettree()
{
	tree*newtree;
	newtree=(tree*)malloc(sizeof(tree));
	cout<<"\nEnter the data : ";
	cin>>newtree->data;
	newtree->left=NULL;
	newtree->right=NULL;
}

void create_tree()
{
	int i;
	tree*newtree;
	tree*temp;
	tree*parent;
	newtree=gettree();
	if(root==NULL)
	{
		root=newtree;
	}
	else
	{
		temp=root;
		while(temp!=NULL)
		{
			parent=temp;
			if(newtree->data<temp->data)
			{
				temp=temp->left;
			}
			else
			{
				temp=temp->right;
			}
		}
		if(newtree->data<parent->data)
		{
			parent->left=newtree;
		}
		else
		{
			parent->right=newtree;
		}
	}
}
void postorder(struct node*temp)
{
	if(temp!=NULL)
	{
		postorder(temp->left);
		postorder(temp->right);
		cout<<temp->data<<" ";
	}
}
void preorder(struct node*temp)
{
	if(temp!=NULL)
	{
		cout<<temp->data<<" ";
		preorder(temp->left);
		preorder(temp->right);
	}
}
void inorder(struct node*temp)
{
	if(temp!=NULL)
	{
		inorder(temp->left);
		cout<<temp->data<<" ";
		inorder(temp->right);
	}
}
int main()
{
	while(1)
	{
		int ch;
		cout<<"\n*******************  T R E E  O P E R A T I O N S *****************************\n";
		cout<<"\n1.Insert an elememt in tree\n2.Display all elemnt of tree \n3.Exit\n";
		cout<<"\nChoose oprations : ";
		cin>>ch;
		switch(ch)
		{
			case 1: create_tree();
			break;
			case 2: cout<<" \n******************** DISPLAY OPTIONS ****************************\n";
			cout<<"\n1.Preorder\n2.Postorder\n3.Inorder\n4.Exit";
			int chk;
			cout<<"\nChoose a option : ";
			cin>>chk;
			switch(chk)
			{
				case 1: preorder(root);
				break;
				case 2: postorder(root);
				break;
				case 3: inorder(root);
				break;
				case 4 : main();
				break;
			}
			break;
			case 3: return 0;
		}
	}
	return 0;	
}
