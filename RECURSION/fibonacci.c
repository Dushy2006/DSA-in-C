#include<stdio.h>
int fib(int n){
    if(n<=0)
    return 0;
    if(n==1)
    return 1;
    else 
    return fib(n-1)+fib(n-2);

}
int main()
{
    int n;
printf("Enter the no. of terms of fibonacci series you want to print:");

scanf("%d",&n);
int k;
printf("The fibonacci series is:");
for(int i=0;i<n;i++){
k=fib(i);
printf("%d ",k);
}
return 0;
}