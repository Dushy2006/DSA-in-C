/*Program 2: Orange Level
Write a C program using recursion to search a given element in a sorted array using binary
search. Since binary search works only on a sorted array, ensure that the array is in ascending
order before performing the search.
Sample input and output:
Enter the number of elements:
6
Enter the array elements in ascending order:
10 20 30 40 50 60
Enter the element to search:
50
The element 50 is found at position 5*/
#include<stdio.h>
int mid;
int binary_search(int *a,int k,int lb,int ub){
if(lb>ub){
    return -1;
}
        mid=(lb+ub)/2;
        if(a[mid]==k){
           return mid;


        }
        else if(a[mid]>k)
       {
        return binary_search(a,k,lb,mid-1);
       }
       else{
        return binary_search(a,k,mid+1,ub);
       }
    }

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
    int lb,ub,mid,i=-1;
    lb=0;
    ub=n-1;
    int t;
    t=binary_search(a,k,lb,ub);

    if(t == -1)
    {
        printf("Element not found\n");
    }

    else
    {
        printf("Element found at index %d\n", t);
    }

    return 0;
}
    