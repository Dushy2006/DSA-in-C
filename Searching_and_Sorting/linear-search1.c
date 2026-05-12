/*Program 1: Banana Level
Write a C program to search for a given element in an array using linear search.
The program must consider the following scenarios:
1. Element found
o Write a C program without using functions. If the element is found, the search
should stop immediately and display the position of the element.
*/
#include<stdio.h>
int main(){
    int n;
 
    printf("Enter the no. of elements  u want to enter:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter  %d elements:\n",n);
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    int k;
    printf("Enter the element to be searched:\n");
    scanf("%d",&k);
    int l=-1;
    for(int m=0;m<n;m++){
        if(a[m]==k){
        l=m;
        }
        

    }
    if(l>=0){
        printf("The element %d is found at %d position",k,l);

    }
    else{
        printf("The element %d is not found in the array:",k);

    }
    return 0;

}