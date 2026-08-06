#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void insert_at_end(struct node*head,int a[],int n)
{
    struct node *t,*last;
    head->data=a[0];
    head->next=NULL;
    last=head;
    for(int i=1;i<n;i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

}
int count(struct node * head)
{
    int count=0;
    while(head!=NULL)
    {
      count++;
        head=head->next;
    }
    return count;

}
int sum(struct node* head){
    int sum=0;
    while(head!=NULL)
    {
sum=sum+head->data;
        head=head->next;
    }
    return sum;
}
void display(struct node*head)
{
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head=head->next;
    }
    printf("NULL\n");
}

int main(){
    int a[]={10,20,30,40,50};
    int n;
    n=(sizeof(a))/sizeof(a[0]);
    struct node*head=NULL;
    head=(struct node *)malloc(sizeof(struct node));
    insert_at_end(head,a,n);
    display(head);
   
    printf("\nThe no. of nodes is :%d",count(head));
    printf("\nThe sum of nodes is :%d",sum(head));
 return 0;




}