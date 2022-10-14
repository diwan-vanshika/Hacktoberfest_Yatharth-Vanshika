#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int size;
struct node
{
    int data;
    int pr;
};
void insert(struct node *arr[],int *size);
void delete (struct node *arr[]);
void display (struct node *arr[]);

int main()
{
    struct node *arr[size];
    printf ("Enter size ");
    scanf ("%d",&size);
    printf("Hello world!\n");
    return 0;
}
void insert (struct node *arr[],int *size)
{

}
