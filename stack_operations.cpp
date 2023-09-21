#include<iostream>
#define max 5
using namespace std;

	void push(int element);
	void pop();
	int peek();
	void display();
	int stk[max];
	int element,top=-1;
	void push(int element)
	{
		if(top=max-1)
		{
			cout<<"Stack is full.........";
		}
		else
		{
			top++;
			stk[top]=element;
		}
	}
	void pop()
	{
		if(top==-1)
		{
			cout<<"We cannot pop from a empty stack....";
		}
		else
		{
			top--;
		}
	}
	int peek()
	{
		return top;
	}
	void display()
	{
		cout<<"Element in the stack is : ";
		for(int i=0;i<=top;i++)
		{
			cout<<stk[i]<<" ";
		}
	}
int main()
{
	while(1)
	{
	int ch;
	cout<<"\n***************Opertion of stack ******************";
	cout<<"\n1.Push\n2.POP\n3.Peek\n4.Display\n5.Exit\n";
	cout<<"Choose a option : ";
	cin>>ch;
	switch(ch)
	{
		case 1:cout<<"Enter the element : ";
		cin>>element;
		push(element);
		break;
		case 2:pop();
		break;
		case 3: peek();
		break;
		case 4:display();
		break;
		case 5:return 0;
		break;
		default : cout<<"You choose incorrect options...!!!!";
	}
    }
    return 0;
}
