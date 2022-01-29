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

void deletealt()
{
    struct node* temp=head,*p,*q;
    while(temp!=NULL)
    {
        if(temp->next!=NULL)
        temp->next = temp->next->next;
        temp=temp->next;
    }
}

void printList()
{
    
    struct node* p = head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    
}



int main()
{
    insertBeg(0);
    insertBeg(10);
    insertBeg(5);
    insertBeg(2);
    insertBeg(4);
    insertBeg(7);
    insertBeg(9);
    printList();
    deletealt();
    cout<<"\nAfter Deleting Alternate Nodes\n";
    printList();
}