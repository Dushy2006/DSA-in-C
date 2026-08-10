#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node * insert_at_beginning(struct node*head,int val){
    if (head==NULL)
    {
        head=(struct node*)malloc(sizeof(struct node));
        head->data=val;
        head->next=NULL;
        return head;
    }
    else{

    
    struct node *t,*last;
    t=(struct node*)malloc(sizeof(struct node));
    if(t==NULL){
        printf("Memory allocation failed");
        return NULL;
    }
    last=head;
        t->data=val;
        t->next=last;
        last=t;
        return last;
}
}
        
void display(struct node*head){
    struct node *t=head;
    while(t!=NULL)
    {
        printf("%d->",t->data);
        t=t->next;
    }
    printf("NULL/n");

}
int main()
{
    struct node *head=NULL;
    int a;
    printf("Enter the number of nodes:");
    scanf("%d",&a);
    


    for(int i=1;i<=a;i++)
    
    {
        int val;
 
        printf("Enter the value of node %d:",i);
        scanf("%d",&val);
        head=insert_at_beginning(head,val);
        }
    printf("Displaying linked list:");
    display(head);

return 0;
}