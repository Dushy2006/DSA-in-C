/*
Program 2: Banana Level
Write a C program using multiple user-defined functions to calculate employee salary.
User inputs: Basic salary
Salary Rules: HRA = 20% of basic, DA = 10% of basic, Tax = 5% of gross salary
Functions:
calculateHRA(float basic)
calculateDA(float basic)
calculateGross(float basic, float hra, float da)
calculateTax(float gross)
calculateNet(float gross, float tax)
Display: Gross Salary, Tax, Net Salary

Sample Input:
Enter Basic Salary: 50000

Sample Output:
----- Salary Details -----Gross Salary = 65000.00Tax = 3250.00Net Salary = 61750.00
*/
#include<stdio.h>
float calculateHRA(float a);
float calculateDA(float basic);
float calculateGross(float basic, float hra, float da);
float calculateTax(float gross);
float calculateNet(float gross, float tax);

int main(){

float n;
printf("Enter the basic salary:\n");
scanf("%f",&n);
float k,m,w,o,p;
k=calculateHRA(n);
m=calculateDA(n);
w=calculateGross(n,k,m);
o=calculateTax(w);
p=calculateNet(w,o);
printf("----- Salary Details -----\n");
printf("Gross Salary =%f\n",w);
printf("Tax =%f\n",o);
printf("Net Salary =%f\n",p);
return 0;

}
float calculateHRA(float a)
{
    return (20/100.0)*a;
}
float calculateDA(float basic){
     return (10/100.0)*basic;
}
float calculateGross(float basic, float hra, float da){
    return basic+hra+da;
}
float calculateTax(float gross){
    return (5/100.0)*gross;
}
float calculateNet(float gross, float tax){
    return gross-tax;
}
