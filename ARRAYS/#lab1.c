/*
Program 1: Banana Level
Write a C program in which a person tracks expenses for 7 days. 
Input: Store daily expenses in an array of size 7 
Tasks: Calculate total expense, count how many days the expense was above 1000

Sample Input:
Enter expenses for 7 days: Day 1: 800 Day 2: 1200 Day 3: 950 Day 4: 1500 Day 5: 700 Day 6: 2000 Day 7: 600

Sample output: 
Total Expense = 7750.00 Number of days expense was above 1000 = 3
*/
#include<stdio.h>
int main(){
    int a[7];
    printf("Enter the expenses of 7 days:\n");
    for (int i=0;i<7;i++){
       printf("Day %d: ", i+1);   // print separately
       scanf("%d",&a[i]); 
       printf("\n");  
    }
    int sum=0;int count=0;
for (int i=0;i<7;i++){
sum=sum+a[i];
if(a[i]>1000){
count++;
}
}
printf("Total Expense:%d\n",sum);
printf("Number of days expense was above 1000:%d",count);
return 0;
}