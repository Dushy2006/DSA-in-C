#include<stdio.h>
int fact(int n){
    if(n==1)
    return 1;
    else 
    return n*fact(n-1);
}
int main(){
int n,k;
printf("Enter the number whose factorial you need to find:");
scanf("%d",&n);
k=fact(n);
printf("\nThe factorial of the number is :%d",k);
return 0;
}