#include<stdio.h>
int a[10];
int fib(int n);
int main(){
    
      for (int i = 0; i < 10; i++) {
        a[i] = -1;
    }


    printf("%d",fib(5));
    return 0;
}
int fib(int n){
    if(n<=1)

    {
        a[n]=n;
        return n;
    }
    else{
        if(fib(n-2)==-1){
            a[n-2]=fib(n-2);
        }
        if(fib(n-1)==-1){
            a[n-1]=fib(n-1);
        }
        a[n]=a[n-2]+a[n-1];
        return fib(n-2)+fib(n-1);
    }
}