#include <stdlib.h>
#include <stdio.h>
int pos=1;
struct node
{
    int data;
    struct node *next;
}*start=NULL;
void insert_pos()
{
    struct node *tp,*c;
    tp=(struct node *)malloc(sizeof(struct node));
   
    if(start==NULL)
    {
        printf("Enter the data: ");
        scanf("%d",&tp->data);
        tp->next=NULL;
        start=tp;
        return;
    }
    c=start;
    for(int i=1;i<pos;i++)
    c=c->next;
    printf("Enter the data: ");
    scanf("%d",&tp->data);
    tp->next=c->next;
    c->next=tp;
    pos++;
}
void reverse()
{
    struct node *prev=NULL;
    struct node *current=start;
    struct node *next=NULL;
    while(current != NULL) 
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    start=prev;
}
void display()
{
    struct node *p;
    if(start==NULL)
    {
        printf("No node present.\n");
        return;
    }
    p=start;
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
}
int main()
{
  int a;
  printf("Enter how many data you want to enter: ");
  scanf("%d",&a);
  for(int i=0;i<a;i++)
  insert_pos();
  printf("\nLinked list before reverse:\n");
  display();
  printf("\nLinked list after reverse:\n");
  reverse();
  display();
  return 0;
}
