/*
Program 3: Orange Level
A travel agency wants to maintain the details of tour bookings made by customers. Each
booking contains general information such as booking ID, customer name, and destination.
The travel expense details such as travel fare per person, number of persons, hotel charge, and
discount percentage are to be stored separately.
Write a C program using nested structures by defining the following two structures separately:
 struct Expense
 struct Booking
Include struct Expense as a member inside struct Booking.
Requirements
1. 2. Read the details of n bookings from the user.
For each booking, calculate the following:
a) Total Travel Fare
Total Travel Fare = Travel Fare Per Person × Number of Persons
b) Total Cost Before Discount
Total Cost Before Discount = Total Travel Fare + Hotel Charge
c) Discount Amount
Discount Amount = (Discount Percentage / 100) × Total Cost Before Discount
d) Final Tour Cost
Final Tour Cost = Total Cost Before Discount - Discount Amount
3. Apply the following condition:
o If the final tour cost is greater than 50000, classify the booking as Premium
Booking
o Otherwise, classify it as Regular Booking
4. Display the complete details of all bookings along with:
o total travel fare
o total cost before discount
o discount amount
o final tour cost
o booking category
5. Display:
o the names of customers who received a discount amount greater than Rs. 5000
Sample input and output:
Enter the number of bookings: 3
Enter details of Booking 1
Enter Booking ID: 101
Enter Customer Name: Rahul
Enter Destination: Goa
Enter Travel Fare Per Person: 8000
Enter Number of Persons: 4
Enter Hotel Charge: 15000
Enter Discount Percentage: 10
Enter details of Booking 2
Enter Booking ID: 102
Enter Customer Name: Sneha
Enter Destination: Kashmir
Enter Travel Fare Per Person: 12000
Enter Number of Persons: 5
Enter Hotel Charge: 18000
Enter Discount Percentage: 12
Enter details of Booking 3
Enter Booking ID: 103
Enter Customer Name: Arjun
Enter Destination: Ooty
Enter Travel Fare Per Person: 5000
Enter Number of Persons: 3
Enter Hotel Charge: 10000
Enter Discount Percentage: 5
Sample output:
========== Travel Booking Details ==========
Booking 1
Booking ID : 101
Customer Name : Rahul
Destination : Goa
Fare Per Person : 8000.00
Number of Persons : 4
Hotel Charge : 15000.00
Discount Percentage : 10.00
Total Travel Fare : 32000.00
Total Cost Before Discount: 47000.00
Discount Amount : 4700.00
Final Tour Cost : 42300.00
Booking Category : Regular Booking
Booking 2
Booking ID : 102
Customer Name : Sneha
Destination : Kashmir
Fare Per Person : 12000.00
Number of Persons : 5
Hotel Charge : 18000.00
Discount Percentage : 12.00
Total Travel Fare : 60000.00
Total Cost Before Discount: 78000.00
Discount Amount : 9360.00
Final Tour Cost : 68640.00
Booking Category : Premium Booking
Booking 3
Booking ID : 103
Customer Name : Arjun
Destination : Ooty
Fare Per Person : 5000.00
Number of Persons : 3
Hotel Charge : 10000.00
Discount Percentage : 5.00
Total Travel Fare : 15000.00
Total Cost Before Discount: 25000.0
Final Tour Cost : 23750.00
Booking Category : Regular Booking
========== Customers with Discount Amount Greater Than Rs. 5000 ==========
Customer Name: Sneha, Discount Amount: 9360.00*/
#include<stdio.h>
#include<string.h>
struct Expense{
    float tp;
    int n;
    float hcharge;
    float discount;
};
struct booking{
    int bid;
    char name[100];
    char dest[100];
    struct Expense e;
};
void calculate(struct booking *b,int n){
    char names[100][100];
    int count=0;
    float d[100];
    for(int i=0;i<n;i++){
        float ttf,ttcd,dis,fts;
        ttf=b[i].e.tp*b[i].e.n;
        ttcd=ttf+b[i].e.hcharge;
        dis=(b[i].e.discount/100.0)*ttcd;
        if(dis>5000)
        {
            strcpy(names[count],b[i].name);
            d[count]=b[i].e.discount;
            count++;

        }
        fts=ttcd-dis;
        printf("========== Travel Booking Details ==========\n");
printf("Booking %d\n",(i+1));

printf("Booking ID : %d\n",b[i].bid);
printf("Customer Name :%s\n",b[i].name);

printf("Destination :%s\n",b[i].dest);
printf("Fare Per Person : %f\n",b[i].e.tp);
printf("Number of Persons : %d\n",b[i].e.n);
printf("Hotel Charge : %f\n",b[i].e.hcharge);
printf("Discount Percentage : %f\n",b[i].e.discount);
printf("Total Travel Fare : %f\n",ttf);
printf("Total Cost Before Discount: %f\n",ttcd);
printf("Discount Amount :%f\n",dis);
printf("Final Tour Cost : %f\n",fts);
if(fts>50000)
printf("Booking Category : Premium Booking\n");
else
printf("Booking Category : Regular Booking\n");
    }
    printf("\n========== Customers with Discount Amount Greater Than Rs. 5000 ==========\n");

for(int i = 0; i < count; i++){
    printf("Customer Name: %s, Discount Amount: %.2f\n", names[i], d[i]);
}





    

}

int main (){
    int n;
printf("Enter the number of bookings:\n");
scanf("%d",&n);
struct booking b[n];
for(int i=0;i<n;i++){
    printf("Enter details of Booking %d\n",(i+1));
    printf("Enter booking id:\n");
    scanf("%d",&b[i].bid);
    printf("Enter Customer name:\n");
    scanf(" %[^\n]s",b[i].name);
    printf("Enter Destination:");
    scanf(" %[^\n]s",b[i].dest);
    printf("Enter Travel Fare Per Person:\n");
    scanf("%f",&b[i].e.tp);
    printf("Enter Number of Persons:\n");
    scanf("%d",&b[i].e.n);
    printf("Enter Hotel Charge:\n");
    scanf("%f",&b[i].e.hcharge);
    printf("Enter Discount Percentage:\n");
    scanf("%f",&b[i].e.discount);
}
calculate(b,n);
return 0;


}

