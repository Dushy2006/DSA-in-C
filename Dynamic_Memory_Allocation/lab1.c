
/*
Program 5: Banana Level
Write a C program to allocate memory dynamically for an array of integers using malloc()
and calloc(), resize the memory using realloc(), and release the allocated memory using free().
Sample input and output:
Enter the number of elements: 10
Enter 10 elements for malloc:
1 2 3 4 5 6 7 8 9 10
Elements stored using malloc:
1 2 3 4 5 6 7 8 9 10
Elements stored using calloc (initially zero):
0 0 0 0 0 0 0 0 0 0
Enter new size for realloc: 12
Enter 12 elements after realloc:
10 20 30 40 50 60 70 80 90 100 110 120
Elements after realloc:
10 20 30 40 50 60 70 80 90 100 110 120
Memory deallocated successfully using free().*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int *p;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL){
        printf("Memory not allocated successfully\n");
    }
    else{
        printf("Memory  allocated successfull\n");

    
    printf("Enter %d elements for malloc:\n",n);
    for (int i=0; i<n;i++){
        scanf("%d",&p[i]);
    }
    printf("Elements stored using malloc:\n");
     for (int i=0; i<n;i++){
     printf("%d",p[i]);
    }
}
    int *q;
    q=(int *)calloc(n,sizeof(int));
    printf("Elements stored using calloc:(initially zero)\n");
     for (int i=0; i<n;i++){
     printf("%d",q[i]);
    }
    int k;
    printf("Enter new size for realloc:\n");
    scanf("%d",&k);
    p=(int*)realloc(p,k*sizeof(int));

    if(p==NULL){
printf("Memory not allocated successfully\n");
    }
    else{
                printf("Memory  allocated successfull\n");
                 printf("Enter %d elements for malloc:\n",k);
                 for (int i=0; i<k;i++){
        scanf("%d",&p[i]);
    }
printf("Elements after realloc:");
 for (int i=0; i<k;i++){
     printf("%d",p[i]);
    }
    }
    free(p);
    free(q);
    p=NULL;
    q=NULL;
   
    printf("Memory deallocated successfully using free().");

return 0;
}