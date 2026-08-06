#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void head1(struct node *head,int val){
    
    
    head->data=val;
    head->next=NULL;
    



}
void insert_at_end(struct node*head,int val){
    struct node *t,*last;
    t=(struct node*)malloc(sizeof(struct node));
    if(t==NULL){
        printf("Memory allocation failed");
        return;
    }
    
        t->data=val;
        t->next=NULL;
        last=head;
        while(last->next!=NULL)
        {
            last=last->next;

        }
        last->next=t;
    

}
void display(struct node*head){
    struct node *t=head;
    if(t!=NULL)
    {
        printf("%d->",t->data);
        display(t->next);
    }
   

}
int main()
{
    struct node *head;
    int a;
    printf("Enter the number of nodes:");
    scanf("%d",&a);
    head=(struct node*)malloc(sizeof(struct node));


    for(int i=1;i<=a;i++)
    
    {
        if(i==1)
        {

            int val;

        printf("Enter the value of node %d:",i);
        scanf("%d",&val);
        head1(head,val);
        }
        else{
            int val;
            printf("Enter the value of node %d:",i);
            scanf("%d",&val);
            insert_at_end(head,val);
        }
        
    }
    printf("Displaying linked list:");
    display(head);
    printf("NULL/n");

return 0;
}