//Problem Statement:-

/*A palindrome is a string of character that's the same forward and backward. Typically, punctuation, capitalization, and spaces are ignored. For example, "Poor Dan is in a droop' is a palindrome,
as can be seen by exanuning the characters "poor danisına droop" and observing that they are the same forward and backward.
One way to check for a palindrome is to reverse the characters in the string and then compare with them the original-in a palindrome, the sequence will be identical.

Write C++ program with functions
a) To print original string followed by reversed string using stack
b) To check whether given string is palindrome or not*/

//Code:-

#include <iostream>
#include<string.h>
#define max 10
using namespace std;

class stack
{
public:
	int top;
	char stk[10];
	stack()
	{
		top=-1;
	}

	int empty()
	{
		if (top==-1)
			return(1);
		else
			return(0);
	}
	int full()
	{
		if(top==max-1)
			return (1);
		else
			return (0);
	}
	void push(char ch)
	{
		if(full())
			cout<<"\n Stack is overflow \n";
		else
		{
			top=top+1;
			stk[top]=ch;
		}
	}

	char pop()
	{
		char ch;
		if (empty())
		{
			cout<<"Stack is empty"<<"\0";
			return -1;
		}
		else
		{
			ch=stk[top--];
		}
		return ch;
	}
};


int main()
{
	stack s;
	int k=0,flag;
	char str[10],rev[10],ch;
	cout<<"ENTER STRING == ";
	cin>>str;
	for(int i=0;str[i]!='\0';i++)
	{
		ch=str[i];
		s.push(ch);
	}

	while(s.top!=-1)
	{
		ch=s.pop();
		rev[k++]=ch;
	}
	rev[k]='\0';
	cout<<"REVERSE STRING IS == "<<rev;
	for(int i=1;str[i]!='\0';i++)
	{
		if(str[i]==rev[i])
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
		cout<<"\nSTACK IS NOT PALINDROME";
	else
		cout<<"\nSTACK IS PALINDROME";

	return 0;
}
