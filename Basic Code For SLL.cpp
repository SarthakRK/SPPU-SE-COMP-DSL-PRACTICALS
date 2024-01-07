#include <iostream>
using namespace std;

class node
{
public:
	int data;
	node *next;

}*start;

class SLL
{
    public:
	    SLL()
	    {
		    start=NULL;
	    }
	    void accept();
	    void display();
	    void insert_beg();
	    void insert_end();
        void insert_after();
	    void delete_beg();
	    void delete_end();
	    void delete_node();
};


node *createnode()
{
	node *ntemp;
	ntemp=new node;
	cout<<"Enter Data : ";
	cin>>ntemp->data;
	ntemp->next=NULL;
	return ntemp;
}


void SLL::accept()
{
	int n,i;
	node *trav;
	start=NULL;
	cout<<"How Many Nodes You Want To Enter : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		class node *ntemp=createnode();
		if(start==NULL)
		{
			start=ntemp;
		}
		else
		{
			trav=start;
			while(trav->next!=NULL)
			{
				trav=trav->next;
			}
			trav->next=ntemp;
		}
	}
}


void SLL::display()
{
	node *trav=start;
	while(trav!=NULL)
	{
		cout<<trav->data<<"->";
		trav=trav->next;
	}
	cout<<"NULL";
    cout<<endl;
}


void SLL::insert_beg()
{
	cout<<"\nAdd Node To The Beginning : ";
	node *ntemp=createnode();
	ntemp->next=start;
	start=ntemp;
	display();
	cout<<endl;

}


void SLL::insert_after()
{
	cout<<"Enter Data To Insert After : ";
	node *ntemp=createnode();
	node *trav;
	int serno;
	cout<<"After Which Node You Want To Insert : ";
	cin>>serno;
	trav=start;
	while(trav->data!=serno)
	{
		trav=trav->next;
	}
	ntemp->next=trav->next;
	trav->next=ntemp;
	display();
	cout<<endl;
}


void SLL::insert_end()
{
	cout<<"Which Node You Want To Insert At End : ";
	node *ntemp=createnode();
	node *trav=start;
	while(trav->next!=NULL)
	{
		trav=trav->next;
	}
	trav->next=ntemp;
	display();
	cout<<endl;

}


void SLL::delete_beg()
{
	cout<<"First Element Of Node Is Deleted"<<endl;
	node *trav;
	trav=start;
	start=start->next;
	trav->next=NULL;
	delete(trav);
	display();
	cout<<endl;
}


void SLL::delete_end()
{
	cout<<"End Element Of Node Is Deleted"<<endl;
	node *trav;
	node *old;
	trav=start;
	while(trav->next!=NULL)
	{
		old=trav;
		trav=trav->next;
	}
	old->next=NULL;
	delete(trav);
	display();
    cout<<endl;

}


void SLL::delete_node()
{
	node *trav,*old;
	int serno;
	cout<<"Which Node You Want To Delete : ";
	cin>>serno;
	trav=start;
	while(trav->data!=serno)
	{
		old=trav;
		trav=trav->next;
	}
	old->next=trav->next;
	trav->next=NULL;
	delete(trav);
	display();
    cout<<endl;
}


int main()
{
	SLL s;
	s.accept();
	s.display();
	s.insert_beg();
	s.insert_end();
    s.insert_after();
	s.delete_beg();
	s.delete_end();
	s.delete_node();
	return 0;
}