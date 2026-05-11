/*
Write a C program to analyze the electricity consumption of houses in an apartment.
There are 6 houses in the apartment. The user must enter the electricity units consumed by each house and store them in a one-dimensional array.
The program should calculate and display the following:
Total electricity units consumed by all houses.
Average electricity consumption.
Number of houses consuming more than 300 units.





Sample input:
Enter electricity units consumed by 6 houses:House 1: 250House 2: 320House 3: 400House 4: 280House 5: 350House 6: 150

Sample output:
Total Units Consumed = 1750Average Consumption = 291.67Number of houses consuming more than 300 units = 3

*/
#include<stdio.h>
int main(){
    int a[6];
    printf("Enter electricity units consumed by 6 houses\n");
    for (int i=0;i<6;i++){
       printf("House %d: ", i+1);   
       scanf("%d",&a[i]); 
       printf("\n");  
    }
    int sum=0;int count=0;
for (int i=0;i<6;i++){
sum=sum+a[i];
if(a[i]>300){
count++;
}
}
printf("Total Units consumed:%d\n",sum);
printf("Average Consumption:%d\n",(sum/6));
printf("Number of houses consuming more than 300 units:%d",count);
return 0;
}