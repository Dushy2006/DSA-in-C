/*Program 5: – Jack Level
Write a C program using functions to calculate the financial balance of a play area (day care center).
The play area earns income through the fees paid by children. There are 10 children enrolled. The manager must enter the fee paid by each of the 10 children. The program should calculate the total fee collection.
The play area pays salaries to staff members as follows:
Manager – Rs. 45,000 per month
Senior Caretaker – Rs. 30,000 per month
Assistant Caretaker – Rs. 15,000 per month
The manager should enter:
Number of Managers
Number of Senior Caretakers
Number of Assistant Caretakers
In addition to salaries, the management also spends money on:
Maintenance expenses (entered by the user)
Cash prizes for top-performing children (entered by the user)
Your program should:
Create a function to calculate the total fee collection from 10 children.
Create a function to calculate the total salary expenditure.
Create a function to calculate the total additional expenses (maintenance + prizes).
In the main() function, calculate the total expenditure (salary + additional expenses).
Calculate and display the remaining balance amount after all expenses.
Display:
Total fee collection
Total salary expenditure
Total additional expenses
Final remaining balance
Use appropriate function calls and return values. Do not use global variables.
Sample Input:
Enter fee paid by 10 children:Child 1 Fee: 20000Child 2 Fee: 22000Child 3 Fee: 21000Child 4 Fee: 20000Child 5 Fee: 23000Child 6 Fee: 21000Child 7 Fee: 22000Child 8 Fee: 20000Child 9 Fee: 21000Child 10 Fee: 22000Enter number of Managers: 1Enter number of Senior Caretakers: 2Enter number of Assistant Caretakers: 3Enter maintenance expenses: 30000Enter total cash prizes for top-performing children: 15000
Sample Output:
----- Play Area Budget Summary -----Total Fee Collection = 211000.00Total Salary Expenditure = 150000.00Total Additional Expenses = 45000.00Final Remaining Balance = 16000.00*/
#include<stdio.h>
int fee(int *h,int n){
     int sum=0;
        for (int i=0;i<n;i++){
            sum=sum + *(h+i);


}
return sum;

}
int sal(int p,int q,int r){
    return (p*45000)+(q*30000)+(r*15000);
}
int oth(int w,int y){
    return w+y;
}
int main()
{
    int n;
    printf("Enter the no. of students:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the fees paid by  %d students:\n",n);
    for(int i=0;i<n;i++)
    {
        printf("Child %d Fee:",i);
        scanf("%d",&a[i]);
        printf("\n");

    }
    int c;
    c=fee(a,n);
    int p,q,r,s,t,y,w;
    printf("Enter number of Managers: \n");
   scanf("%d",&p);
    printf("Enter number of Senior Caretakers:\n");
     scanf("%d",&q);
    printf("Enter number of Assistant Caretakers:\n");
     scanf("%d",&r);
     s=sal(p,q,r);
     printf("Enter maintenance expenses\n:");
     scanf("%d",&w);
     printf("Enter total cash prizes for top-performing children:");
    scanf("%d",&y);
    t=oth(w,y);
int d=s+t;
int e=c-d;
  printf("----- Play Area Budget Summary ---/n");
  printf("Total Fee Collection = %d\n",c);
  printf("Total Salary Expenditure = %d\n",s);
  printf("Total Additional Expenses =%d\n",t);
  printf("Final Remaining Balance = %d\n",e);
  return 0;
}