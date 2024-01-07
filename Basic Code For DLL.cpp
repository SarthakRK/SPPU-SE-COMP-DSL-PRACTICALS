#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next, *prev;
} *start;

class DLL
{
public:
    DLL()
    {
        start = NULL;
    }
    void accept();
    void backward();
    void ones();
    void twos();
};

node *createnode(int n)
{
    node *ntemp = new node;
    int r = n % 2;
    ntemp->data = r;
    ntemp->next = NULL;
    ntemp->prev = NULL;
    return ntemp;
}

void DLL::accept()
{
    int i, n;
    cout << "Enter the Number for converting Binary = ";
    cin >> n;
    while (n != 0)
    {
        node *ntemp = createnode(n);
        if (start == NULL)
            start = ntemp;
        else
        {
            node *trav = start;
            while (trav->next != NULL)
            {
                trav = trav->next;
            }
            trav->next = ntemp;
            ntemp->prev = trav;
        }
        n = n / 2;
    }
}

void DLL::backward()
{
    cout << "Backward display = \n";
    node *trav = start;
    while (trav->next != NULL)
        trav = trav->next;
    while (trav != NULL)
    {
        cout << trav->data << "-->";
        trav = trav->prev;
    }
    cout << "NULL\n";
}

void DLL::ones()
{
    node *trav = start;
    while (trav != NULL)
    {
        if (trav->data == 1)
            trav->data = 0;
        else
            trav->data = 1;
        trav = trav->next;
    }
}

void DLL::twos()
{
    ones(); // Calculate ones complement first

    // Adding 1 to the binary number
    node *trav = start;
    int carry = 1;

    while (trav != NULL)
    {
        int sum = trav->data + carry;
        trav->data = sum % 2;
        carry = sum / 2;
        trav = trav->next;
    }

    if (carry > 0)
    {
        node *ntemp = createnode(carry);
        ntemp->next = start;
        start->prev = ntemp;
        start = ntemp;
    }
}

int main()
{
    DLL l;
    l.accept();
    cout<<"\nBinary Number : "<<endl;
    l.backward();
    cout<<"\n1's Complement : "<<endl;
    l.ones();
    l.backward();
    cout<<"\n2's Complement : "<<endl;
    l.twos();
    l.backward();

    return 0;
}
