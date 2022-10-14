#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head=NULL;
struct node* n=NULL;
struct node* ptr=NULL;
void input()
{
    int i = 1;
    if (head==NULL)
    {
        head = (struct node*)malloc(sizeof(struct node));
        printf ("Constant term : ");
        scanf ("%d",&head->data);
        head->next =NULL;
        return;
    }
    for (ptr=head;ptr->next!=NULL;ptr = ptr->next)
    {
        n = (struct node*)malloc(sizeof(struct node));
        ptr->next = n;
        printf ("Enter value of x%d ",i);
        scanf ("%d",&n->data);
        i++;
    }
}
struct node1
{
    int data1;
    struct node1* next1;
};
struct node1* head1;
struct node1* n1;
struct node1* ptr1;
void input1()
{
    int j = 1;
    if (head1==NULL)
    {
        head1 = (struct node1*)malloc(sizeof(struct node1));
        printf ("Enter constant term : ");
        scanf ("%d",&head1->data1);
        head1->next1 = NULL;
        return;
    }
    for (ptr1=head1;ptr1->next1!=NULL;ptr1=ptr1->next1);
    {
        n1 = (struct node1*)malloc(sizeof(struct node1));
        ptr1->next1 = n1;
        printf ("Enter x%d ",j);
        scanf("%d",&n1->data1);
        j++;
    }
}
struct node2
{
    int data2;
    struct node2* next2;
};
struct node2* head2;
struct node2* n2;
struct node2* ptr2;

void add()
{
   if (head2==NULL)
   {
       head2 = (struct node2*)malloc(sizeof (struct node2));
       head2->data2 = head->data + head1->data1;
       return;
   }
   int x = 1,y=4;
   while (x<y)
   {
       for (ptr=head;x<y;ptr=ptr->next);
       for (ptr1=head1;x<y;ptr1=ptr1->next1);
       for (ptr2=head2;x<y;ptr2=ptr2->next2)
       {
           n2 = (struct node2*)malloc(sizeof (struct node2));
           ptr2->next2 = n2;
           n2->data2 = ptr->data+ptr1->data1;
           x++;
       }

   }
}
void display()
{
    for (ptr2=head2;ptr2!=NULL;ptr2=ptr2->next2)
    {
        printf ("%d",ptr2->data2);
    }
}
int main()
{
    int i=1,j=1;
    while (i<=4)
    {
        input();
        i++;
    }

    add();
    display();
    printf("Hello world!\n");
    return 0;
}
