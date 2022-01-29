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
    if(temp==NULL)
    cout<<"EMPTY!";
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}

void deleting()
{
    
    struct node* p,*temp = head;
    while(temp!=NULL)
    {
        p = temp;
        temp = temp ->next;
        free(p);
    }
    head = NULL;
}



int main()
{
    
    insertBeg(5);
    insertBeg(2);
    insertBeg(4);
    insertBeg(7);
    insertBeg(9);
    printList();
    
    int n;
     cout<<"\nDELETING\n";
    
    deleting();
    cout<<"\n";
    printList();
}