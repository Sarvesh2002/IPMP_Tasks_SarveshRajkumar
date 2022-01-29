
#include <iostream>
#include <string.h>
using namespace std;
int N = 0;

struct node
{
    char ch;
    struct node* next; 
    
};
struct stack
{
    char ch;
    struct stack* link;
};


struct node* head1 = NULL;
struct stack* head2 = NULL;
void push(char c)
{
    struct stack* temp = (struct stack*)malloc(sizeof(struct stack));
    if(head2 == NULL)
    {
        temp->ch = c;
        temp->link = NULL;
    }
    else
    {
        temp->ch = c;
        temp->link = head2;
    }
    head2 = temp;

}
void insertBeg(char c)  
{
    N++;
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->ch=c;
    
    if(head1==NULL)
    {
        head1=temp;
        temp->next=NULL;
    }
    else
    {
        temp->next=head1;
        head1=temp;
    }
    
}


void printList()
{
    struct node* temp = head1;
    cout<<"List - ";
    while(temp!=NULL)
    {
        cout<<temp->ch;
        push(temp->ch);
        temp=temp->next;
        
    }
}

int palin()
{
    struct stack*s = head2;
    int flag = 1;

    struct node* temp = head1;
    while( temp!=NULL && s!=NULL )
    {
        if(temp->ch!=s->ch)
        {
            flag = 0;
            break;
        }
        temp = temp->next;
        s = s->link;
    }
    return flag;
}



int main()
{
    char pal[20];
    cin>>pal;
    for ( int i = (strlen(pal) - 1) ; i>=0 ;i-- )
    {
        insertBeg(pal[i]);
    }
    printList();
    cout<<"\n";
    if(palin())
    cout<<"\nA Palindrome\n\n";
    else
    cout<<"\nNot a Palindrome\n\n";
}