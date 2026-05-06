#include<stdio.h>
int m=0;
int reverse(int n){
int d;
if(n==0)
return m;
else{
    d=n%10;

m=10*m+d;
return reverse(n/10);
}
}



int main(){
    
int n,k;
printf("Enter a number :\n");
scanf("%d",&n);
k=reverse(n);
printf("The reversed number is :%d\n",k);
return 0;

}