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
        cout<<temp->data;
        temp=temp->next;
    }
}

void deleteNth(int n)
{
    struct node* temp;
    struct node* p = head;
    int x = N - n ;
    int i;
   
    if( x < 0 )
    {
        cout<<"Not possible\n";
    }
    else if( x == 0 )
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    else
    {
        for ( i = 1 ; i!=x ; i++ )
        p = p->next;
        temp = p->next;
        p->next = p->next->next;
        free(temp);
        
    }
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
     cout<<"\n";
    cin>>n;
    deleteNth(n);
    cout<<"\n";
     printList();
}