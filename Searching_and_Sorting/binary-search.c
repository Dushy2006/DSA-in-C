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
    int lb,ub,mid,i=-1;
    lb=0;
    ub=n-1;
    while(lb<=ub){
        mid=(lb+ub)/2;
        if(a[mid]==k){
            i=mid;
            break;


        }
        else if(a[mid]>k)
       {
        ub=mid-1;
       }
       else{
        lb=mid+1;
       }
    }
    if(i==-1){
        printf("Not found\n");

    }
    else{
printf("Found at %d in the array",i);
    }
    return 0;
}