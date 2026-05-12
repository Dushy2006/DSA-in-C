/*Program 3: Orange Level
Write a C program using multiple user-defined functions to manage college fest finances.
Income Sources: Registration fees from participants (15 participants), Sponsorship amount, Stall rent collection
Expenses:
Stage setup, Guest payment, Marketing expense, Volunteer refreshment expense (₹200 per volunteer)
User inputs: Registration fee per participant, Sponsorship amount, Stall rent amount, Number of volunteers, All expense amounts
Functions Required:
calculateIncome()
calculateVolunteerExpense()
calculateTotalExpense()
calculateProfitOrLoss()
Display: Total Income, Total Expense, Profit or Loss
Sample Input:
Registration Fee: 500Sponsorship: 20000Stall Rent: 10000Stage Setup: 15000Guest Payment: 8000Marketing: 5000Volunteers: 20

Sample Output:
Total Income: ₹37500.00Total Expense: ₹33000.00Profit: ₹4500.00

*/
#include<stdio.h>
float income(float a,float b,float c)
{
    return (a*15)+b+c;
}
float vol(int e)
{
   return (200*e);
}

float total(float s ,float d,float f,float k){
    return s+d+f+k;
}
void pol(float z,float y){
if(z>y){
    printf("Profit:%f\n",z-y);

}
else{
    printf("Loss:%f\n",y-z);
}
}
int main()
{
    float a,b,c,d,f,g,h,s,i,j,k;
    int e;
    printf("Enter the registration amount:\n");
    scanf("%f",&a);
    printf("Enter the Sponsorship amount: \n");
    scanf("%f",&b); 
     printf("Enter the Stall rent amount: \n");
    scanf("%f",&c); 
     printf("Enter the Stage setup amount: \n");
    scanf("%f",&d);
     printf("Enter the guest amount: \n");
    scanf("%f",&k); 
     printf("Enter the marketting amount: \n");
    scanf("%f",&f); 
     printf("Enter the no. of volunteers: \n");
    scanf("%d",&e); 
g=income(a,b,c);
s=vol(e);

i=total(s,d,f,k);
printf("Total income:%f\n",g);
printf("Total expense:%f\n",i);
pol(g,i);
return 0;

}