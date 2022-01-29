#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
    int inter;
    
};
void insertbeg( struct node ** head , int x )
{
    struct node * temp = (struct node*)malloc(sizeof(struct node));
    if(*head==NULL)
    {
        temp->data = x;
        temp->next = NULL;
        *head = temp;
        (*head)->inter = 0;
    }
    else
    {
        temp->data = x;
        temp->next = *head;
        *head = temp;
        (*head)->inter = 0;
    }
}
void intersect(struct node * head1 ,struct node * head2  )
{
    struct node * temp = head1;
    while(temp!=NULL)
    {
        temp->inter = 1;
        temp=temp->next;
    }
    temp = head2;
    while(temp->inter!=1 && temp!=NULL)
    {
        temp=temp->next;
    }
    cout<<"Intersection is at node value "<<temp->data;

}


int main()
{    
    struct node* head1 = (struct node*)malloc(sizeof(struct node));
    struct node* head2 = (struct node*)malloc(sizeof(struct node));
    head1=NULL;
    head2=NULL;
    int i;
    for(i=0;i<5;i++)
    insertbeg(&head1,i);
    head2 = head1->next->next;
    for(i=0;i<2;i++)
    insertbeg(&head2,-i);
    intersect(head1 , head2);   
}