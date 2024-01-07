//Problem Statement:

/*Queues are frequently used in computer programming, and a typical example is the creation of a job queue by an operating system.
If the operating system does not use priorities, then the jobs are processed in the order they enter the system. Write C++ program for simulating job queue.

Write functions to add job and delete jobs from the queue.*/

//Code :-

#include <iostream>
using namespace std;
#define max 10

int queue[100],front=-1,rear=-1;

void Insert()
{

	int job;
	if(rear==max-1)
	{
		cout<<"QUEUE OVERFLOW"<<endl;
	}

	else
	{
		if(front==-1)
			front=0;
		cout<<"ENTER THE COMPUTER JOB IN QUEUE :"<<endl;
		cin>>job;
		rear++;
		queue[rear]=job;
	}
}

void Delete()
{
	if(front==-1||front>rear)
	{
		cout<<"QUEUE UNDERFLOW"<<endl;
		return;
	}

	else
	{
		cout<<"JOB DELETED FROM QUEUE IS"<<queue[front]<<endl;
		front++;
	}
}

void Display()
{
	if(front==-1)
	{
		cout<<"QUEUE IS EMPTY"<<endl;
	}

	else
	{
		cout<<"COMPUTER JOB QUEUE ARE:";
		for(int i=front;i<=rear;i++)
		{
			cout<<queue[i]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int ch;
	cout<<"1)INSERT JOB TO QUEUE"<<endl;
	cout<<"2)DELETE JOB FROM QUEUE"<<endl;
	cout<<"3)DISPLAY ALL THE JOB OF QUEUE"<<endl;
	cout<<"4)EXIT"<<endl;
	do
	{
		cout<<"ENTER YOUR CHOICE:"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:Insert();
				break;
			case 2:Delete();
				break;
			case 3:Display();
				break;
			case 4:cout<<"EXIT"<<endl;
				break;
		}
	}while(ch!=4);

return 0;
}
