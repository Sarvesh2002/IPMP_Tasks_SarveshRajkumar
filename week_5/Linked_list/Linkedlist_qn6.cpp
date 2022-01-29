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
        cout<<temp->data;
        temp=temp->next;
    }
}

int loopiden()
{
    int flag = 0;
    struct node* temp = head;
    while(temp!=NULL)
    {
        temp->loop = 1;
        if(temp->next!=NULL)
        if(temp->next->loop == 1)
        {
            flag = 1;
            break;
        }
        temp = temp->next;

    }
    return flag;

}
int main()
{
    
    insertBeg(5);
    insertBeg(2);
    insertBeg(4);
    insertBeg(7);
    insertBeg(9);
    printList();
    
    if(loopiden())
    cout<<"\nThere is a Loop ";
    else
    cout<<"\nThere is no Loop ";
    cout<<"\nCreating a Loop \n";
    head->next->next->next = head->next;
    if(loopiden())
    cout<<"There is a Loop ";
    else
    cout<<"There is no Loop ";    
}