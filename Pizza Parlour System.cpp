//Problem Statement:-

/*Pizza parlor accepting maximum M orders.Orders are served in first come first served basis.
Order once placed cannot be canceled.

Write C++ program to simulate the system using a circular queue using arrays.*/

//Code:-

#include <iostream>
using namespace std;

const int MAX=5;

class pizzaparlour
{

	int front,rear;
	int orders[MAX];

	public:
		pizzaparlour()
		{
			front=rear=-1;
		}

		bool addorder(int data);
		void serveorder();
		void display();
};

bool pizzaparlour::addorder(int id)
{
	if(rear==-1)
	{
		front=rear=0;
		orders[rear]=id;
		return true;
	}
	else
	{
		int rear=(rear+1)%MAX;
		if(rear==front)
		{
			cout<<"\nCAFE IS FULL\n";
			return false;
		}
		else
		{
			orders[rear]=id;
			return true;
		}
	}
}

void pizzaparlour::serveorder()
{
	if(front==-1)
	{
		cout<<"\n NO ORDERS IN CAFE\n";
		return;
	}
	else
	{
		cout<<"\n ORDER NO."<<orders[front]<<" IS PROCESSED.\n";
		if(front==rear)//only one order
		{
			front=rear=-1;
		}
		else
		{
			front=(front +1)%MAX;
		}

	}
}

void pizzaparlour::display()
{
	int i=0;
	if(front==-1)
	{
		cout<<"\nCAFE IS EMPTY.NO ORDER.\n";
		return;
	}
	else
	{
		cout<<"\nORDER ID'S:\n";
		for(i=front;i<=rear;i=((i+1)%MAX))
		{
			cout<<orders[i]<<" ";
		}
	}
}

int main()
{
	int ch,id=0;

	pizzaparlour q;

	do
	{
		cout<<"\n*****MENU******\n";
		cout<<"1.ACCEPT ORDER\n";
		cout<<"2.SERVE ORDER\n";
		cout<<"3.DISPLAY ORDER\n";
		cout<<"4.EXIT";

		cout<<"\nCHOICE:";
		cin>>ch;

		switch(ch)
		{

		case 1:
			id++;
			if(q.addorder(id))
			{
				cout<<"THANK YOU FOR ORDER.ORDER ID IS:"<<id;
			}
			else
			{
				id--;
			}
			break;

		case 2:q.serveorder();
				break;

		case 3:q.display();
				break;

		}

	}while(ch!=4);

	cout<<"\nTHANK YOU.KEEP VISITING.";
}
