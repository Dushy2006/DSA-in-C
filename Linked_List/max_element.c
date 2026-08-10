#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node * insert_at_end(struct node *head,int val)
{
    if(head==NULL)
    {
        head=(struct node*)malloc(sizeof(struct node));
        head->data=val;
        head->next=NULL;
        return head;
    }
    else{
        struct node *t,*last;
        t=(struct node*)malloc(sizeof(struct node));
        t->data=val;
        t->next=NULL;
        last=head;
        while(last->next!=NULL)
        {

        
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
int max(struct node *head)
{
    int x=0;
    while(head!=NULL)
    {
        if(head->data>x)
        x=head->data;
        head=head->next;
    }
    return x;

}
/* int max_recursive(struct node *head)
{
if(head==NULL)
{

return 0;
}
else{
x=max_recursive(head->next)
if(x>head->data)
return x;
else
return head->data;
}

}*/
int main()
{
    struct node *head=NULL;
    int a;
    printf("Enter the no. of nodes you want to enter:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        int val;
        printf("Enter the value of node %d:",i);
        scanf("%d",&val);
        head=insert_at_end(head,val);

    }
    printf("Displaying the linked list:\n");
    display(head);
    printf("The max element is:%d",max(head));
    return 0;
}