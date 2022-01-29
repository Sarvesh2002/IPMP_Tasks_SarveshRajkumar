#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
    int loop;
    
};

struct node* head= NULL;

void insertBeg(int x)  
{

    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->loop = 0;
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
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void mid()
{
    struct node* temp1=head , * temp2 = head;
    while(temp2->next!=NULL)
    {
        if(temp2->next->next == NULL)
        {
            cout<<temp1->data<<" "<<temp1->next->data;
            break;
        }
        
        temp2 = temp2->next->next;
        temp1 = temp1->next;
    }
    if(temp2->next == NULL )
        {
            cout<<temp1->data;
            
        }
}
int main()
{    
    int n , a , i;
    cout<<"Enter Number of elements ";
    cin>>n;
    cout<<"Enter elements : \n";
    for( i = 0 ; i < n ; i++ )
    {
        cin>>a;
        insertBeg(a);
    }
    printList();
    cout<<"\n\n";
    mid(); 
       
}