#include<stdio.h>
int getrate(int n){
  switch(n){
    case 1:return 20;
    break;
    case 2: return 40;
    break;
    case 3: return 60;
    break;
    default:printf("Invalid input:");
    break;

  }
    
   
}
float calculatebill(int n, int b){
    return n*b;

}
void displaybill(int k){
    printf("------Parking bill--------\n");
    printf("Total parking fee:%d\n",k);
}
int main()
{
    int n,a;
    printf("Vehicle Types:\n1 → Bike (Rs.20/hr)\n2 → Car (Rs.40/hr)\n3 → SUV (Rs.60/hr\n)");
    printf("Enter vehicle type:\n");
    scanf("%d",&n);
    printf("Enter the no. of hours:\n");
    scanf("%d",&a);
    int b;
    float c;
   b=getrate(n);
   c=calculatebill(a,b);
   displaybill(c);

return 0;
}