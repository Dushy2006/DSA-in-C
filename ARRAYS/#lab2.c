#include<stdio.h>
int main()
{
int n;
printf("Enter the no. of elements you want to enter to the array\n:");
scanf("%d",&n);
int a[n];
printf("Enter %d elements:\n",n);
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int c_even=0,c_odd=0;
for(int i=0;i<n;i++){
    if(a[i]%2==0){
c_even++;
    }
    else{
        c_odd++;
    }
}
printf("The no. of even elements is:%d\n",c_even);
printf("The no. of odd elements is:%d\n",c_odd);
return 0;
}