#include <iostream>
using namespace std;
int N = 0;

struct node
{
    int data;
    struct node* next;
    
    
};

struct node* head= NULL;

void insertBeg(int x)  
{
    N++;
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data=x;
    
    if(head==NULL)
    {
        head=temp;
        temp->next=NULL;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
    
}

void printList()
{
    struct node* temp=head;
    cout<<"List - ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void reverse( struct node * p , struct node * q)
{
    struct node *r;
    if(q->next!=NULL)
    {
        r = q->next;
        q ->next = p;
        if( p == head )
        p ->next = NULL;
        p = q;
        q = r;
        reverse ( p , q );
        
    }
    else
    {
        q->next = p;
        head = q;
    }
}



int main()
{
    
    insertBeg(5);
    insertBeg(2);
    insertBeg(4);
    insertBeg(7);
    insertBeg(9);
    insertBeg(10);
    printList();
    struct node * q , * p = head ;
    if(head!=NULL)
    q = p->next;
    reverse(p , q);
    cout<<"\n";
    printList();
}