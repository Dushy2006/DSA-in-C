/*Program 2: Orange Level
An electricity board wants to maintain the details of its consumers and generate their monthly
electricity bills. For each consumer, the following information is to be stored:
 Consumer Number
 Consumer Name
 Number of Units Consumed
Write a C program using a structure to store the consumer details and a function to calculate
the electricity bill.
Requirements
1. Define a structure named Consumer with the following members:
o cno to store the consumer number
o name to store the consumer name
o units to store the number of units consumed
2. In the main() function:
o Create a structure variable for one consumer
o Read the consumer details from the user
3. Pass the individual structure members to a function named calculateBill().
o Do not pass the entire structure variable to the function.
o Pass only the required members such as consumer number, consumer name,
and units consumed.
4. Inside the function, calculate the electricity bill according to the following tariff rules:
 For the first 100 units, charge Rs. 2.00 per unit
 For the next 100 units, charge Rs. 3.50 per unit
 For all units above 200, charge Rs. 5.00 per unit
5. After calculating the bill amount, apply the following condition:
o If the bill amount is more than Rs. 1000, add a surcharge of 10% of the bill
amountCompute the final bill amount as:
Final Bill = Bill Amount + Surcharge
7. Display the following details inside the function:
o Consumer Number, Consumer Name, Units Consumed, Bill Amount
o Surcharge, Final Bill Amount
Sample input and output:
Enter Consumer Number: 201
Enter Consumer Name: Ramesh
Enter Units Consumed: 250
Electricity Bill Details
Consumer Number : 201
Consumer Name : Ramesh
Units Consumed : 250.00
Bill Amount : 800.00
Surcharge : 0.00
Final Bill : 800.00*/
#include<stdio.h>
struct Consumer{
    int cno;
    char name[100];
    int unit;

};
void calculateBill(int cno,char *ch,int units){
    float bill,sur;
    if(units<=100)
    bill=units*2.00;
    else if(units>100 && units<=200)
    bill=(100*2.00)+(units-100)*3.50;
    else
    bill=(100*2.00)+(units-100)*3.50+(units-200)*5.00;
    if (bill>1000){
         sur=((10/100)*bill);
    }
    else
   sur=0;
   printf("Electricity Bill Details\n");
printf("Consumer Number :%d\n",cno);
printf("Consumer Name : %s\n",ch);
printf("Units Consumed :%d\n",units);
printf("Bill Amount : %f\n",bill);
printf("Surcharge : %f\n",sur);
printf("Final Bill : %f\n",(bill+sur));
}
int main(){
    struct Consumer s;
    printf("Enter the consumer no.:");
    scanf("%d",&s.cno);
    printf("Enter the name of the consumer:\n");
    scanf(" %[^\n]s",s.name);
    printf("Enter the no. of units:\n");
    scanf("%d",&s.unit);
    calculateBill(s.cno,s.name,s.unit);
   

}