#include<stdio.h>
int sum(int n){
if(n==1)
return 1;
else
return n+sum(n-1);
}
int main(){
    
int n,k;
printf("Enter the valuer of n to find sum:\n");
scanf("%d",&n);
k=sum(n);
printf("The sum of n natural numbers is :%d\n",k);
return 0;

}