#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node * Head = NULL;
void insertbeg(struct node **head, int x)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if (*head == NULL)
    {
        temp->data = x;
        temp->next = NULL;
        *head = temp;
    }
    else
    {
        temp->data = x;
        temp->next = *head;
        *head = temp;
    }
}

void reverse( struct node * p , struct node * q)
{
    struct node *r;
    if(q->next!=NULL)
    {
        r = q->next;
        q ->next = p;
        if( p == Head )
        p ->next = NULL;
        p = q;
        q = r;
        reverse ( p , q );
        
    }
    else
    {
        q->next = p;
        Head = q;
    }
}
void printing(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        cout << " " << temp->data;
        temp = temp->next;
    }
}
void intersection(struct node *head1, struct node *head2)
{
    struct node *head3 = (struct node *)malloc(sizeof(struct node));
    head3 = NULL;
    struct node *temp1 = head1, *temp2 = head2;

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data > temp2->data)
            temp2 = temp2->next;
        else if (temp1->data < temp2->data)
            temp1 = temp1->next;
        else
        {
            insertbeg(&head3, temp1->data);
            temp1=temp1->next;
            temp2=temp2->next;
        }
        
    }
    temp1 = head3->next;
    Head = head3;
    reverse(head3,temp1);
    printing(Head);
}

    int main()
    {
        struct node *head1 = (struct node *)malloc(sizeof(struct node));
        struct node *head2 = (struct node *)malloc(sizeof(struct node));
        head1 = NULL;
        head2 = NULL;

        insertbeg(&head1, 20);
        insertbeg(&head1, 18);
        insertbeg(&head1, 15);
        insertbeg(&head1, 10);
        insertbeg(&head1, 9);
        insertbeg(&head1, 5);
        insertbeg(&head1, 1);
        insertbeg(&head2, 30);
        insertbeg(&head2, 20);
        insertbeg(&head2, 10);
        insertbeg(&head2, 5);
        insertbeg(&head2, 2);
        insertbeg(&head2, 1);

        intersection(head1, head2);
    }