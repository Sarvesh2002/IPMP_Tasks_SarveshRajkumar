#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
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
    struct node *temp1 , *temp2;
    struct node *head3 = (struct node *)malloc(sizeof(struct node));
    head3 = NULL;
    temp1 = head1;
    temp2 = head2;
    while(temp1!=NULL)
    {
        temp2=head2;
        while(temp2!=NULL)
        {
            if(temp1->data == temp2->data)
                {
                    insertbeg(&head3,temp1->data);
                    break;
                }
            temp2=temp2->next;
        }
        temp1=temp1->next;
    }
    printing(head3);
}
void Union(struct node *head1, struct node *head2)
{
    struct node *temp1 , *temp2;
    struct node *head3 = (struct node *)malloc(sizeof(struct node));
    head3 = NULL;
    temp1 = head1;
    temp2 = head2;
    int flag = 0;
    while(temp1!=NULL)
    {
        temp2=head2;
        flag = 0;
        while(temp2!=NULL)
        {
            if(temp1->data == temp2->data)
                {
                    flag = 1;
                }
            temp2=temp2->next;
        }
        if(flag==0)
        insertbeg(&head3,temp1->data);
        temp1=temp1->next;
    }
    temp2=head2;
    while(temp2!=NULL)
    {
        insertbeg(&head3,temp2->data);
        temp2=temp2->next;
    }
    printing(head3);
}

    int main()
    {
        struct node *head1 = (struct node *)malloc(sizeof(struct node));
        struct node *head2 = (struct node *)malloc(sizeof(struct node));
        head1 = NULL;
        head2 = NULL;

        insertbeg(&head1, 2);
        insertbeg(&head1, 30);
        insertbeg(&head1, 15);
        insertbeg(&head1, 10);
        insertbeg(&head1, 9);
        insertbeg(&head1, 17);
        insertbeg(&head1, 3);
        
        insertbeg(&head2, 3);
        insertbeg(&head2, 20);
        insertbeg(&head2, 10);
        insertbeg(&head2, 5);
        insertbeg(&head2, 6);
        insertbeg(&head2, 30);
        cout<<"Intersection is : \n";
        intersection(head1, head2);
        cout<<"\n";
        cout<<"Union is : \n";
        Union(head1,head2);
    }