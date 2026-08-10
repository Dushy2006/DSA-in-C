#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node * insert_at_end(struct node *head,int val)
{
    if (head==NULL){
        head=(struct node *)malloc(sizeof(struct node));
        head->data=val;
        head->next=NULL;
        return head;
    }
    else{
        struct node *t,*last;
        last=head;
        t=(struct node *)malloc(sizeof(struct node));
        t->data=val;
        t->next=NULL;
        while(last->next!=NULL){
            last=last->next;
        }
        last->next=t;
        return head;

    }
}
    void display(struct node *head)
    {
        while(head!=NULL){
            printf("%d->",head->data);
            head=head->next;
        }
        printf("NULL\n");

   }
   struct node * linear_search(struct node *head,int key){
    while(head!=NULL){
        if(head->data==key)
        return head;
        head=head->next;
    }
    return NULL;
   }
   /*Recursive approach
   struct node * linear_search(struct node *head,int key)
   {
   if (head==NULL)
   return NULL;
   if(head->data==key)
   return (head);
   else
   return linear_search(head->next,key);
   }

   */
   int main()
   {
    struct node *head=NULL;
    int a;
    printf("Enter the no of nodes ypu want to enter:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        int val;
        printf("Enter the value of node %d:",i);
        scanf("%d",&val);
        head=insert_at_end(head,val);

    }
    display(head);
    printf("Enter the element you want to search:\n");
    int key;
    scanf("%d",&key);
    struct node *l;
    l=linear_search(head,key);
    if(l){
    printf("key is found %d\n",l->data);
    }
    else{
        printf("Key is not found\n");

    }
    return 0;
   }

