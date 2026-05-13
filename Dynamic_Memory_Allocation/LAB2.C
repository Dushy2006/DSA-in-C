/*
Program 2: Apple Level
Write a C program to dynamically allocate memory for storing the monthly expenses of a family
for n months using malloc(). Display the entered expenses and calculate the total expense. Then
resize the memory using realloc() to add expenses for additional months, display the updated
list, and find the new total expense. Finally, release the allocated memory using free().
Sample input and output:
Enter the number of months: 4
Enter the expenses for 4 months:
1200 1500 1800 2000
Expenses entered are:
Month 1: 1200.00
Month 2: 1500.00
Month 3: 1800.00
Month 4: 2000.00
Total expense for 4 months = 6500.00
Enter the new total number of months: 6
Enter the expenses for the additional 2 months:
2200 2500
Updated list of expenses:
Month 1: 1200.00
Month 2: 1500.00
Month 3: 1800.00
Month 4: 2000.00
Month 5: 2200.00
Month 6: 2500.00
New total expense for 6 months = 11200.00
Memory deallocated successfully.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int *p;
    printf("Enter the number of months:\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL){
        printf("Memory not allocated successfully\n");
    }
    else{
        printf("Memory  allocated successfull\n");

    
    printf("Enter %d months expenses:\n",n);
    for (int i=0; i<n;i++){
        scanf("%d",&p[i]);
    }
    int sum=0;
    printf("Expenses entered are:\n");
     for (int i=0; i<n;i++){
     printf("Month %d:%d\n",(i+1),p[i]);
     sum=sum+p[i];
    }
    printf("Total expense for %d months =%d",n,sum);
}
int *temp;
int k;
printf("Enter the new total number of months:");
scanf("%d",&k);
temp=(int *)realloc(p,k*sizeof(int));
if(temp==NULL){
    printf("Memory not allocated\n");
}
else{
p=temp;
int t;
t=k-n;

printf("Enter the expenses for the additional %d months:\n",t);
for(int i=n;i<k;i++)
{
    scanf("%d",&p[i]);
}
printf("Updated list of expense:\n");
int tsum=0;
for (int i=0; i<k;i++){
     printf("Month %d:%d\n",(i+1),p[i]);
     tsum=tsum+p[i];
    }
    printf("Total expense for %d months =%d",k,tsum);
    free(p);
    p=NULL;
    printf("Memory deallocated successfully.");
}
    return 0;
}
