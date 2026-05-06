#include<stdio.h>
int sum1=0;
int sum(int n){
int d;
if(n==0)
return sum1;
else{
d=n%10;
sum1=sum1+d;
return sum(n/10);
}
}



int main(){
    
int n,k;
printf("Enter a number :\n");
scanf("%d",&n);
k=sum(n);
printf("The sum of digits is :%d\n",k);
return 0;

}