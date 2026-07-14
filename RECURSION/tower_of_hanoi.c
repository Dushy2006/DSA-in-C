#include<stdio.h>
void toi(int n,int a,int b,int c)
{
    if(n>0){

    
    toi(n-1,a,c,b);
    printf("Move from %d to %d\n",a,c);
    toi(n-1,b,a,c);
    }

}
int main()
{
    toi(3,1,2,3);
    return 0;
}