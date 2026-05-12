/*Program 5: Jack Level
A supermarket records the number of items sold in each billing counter during a day. The
sales manager wants to analyze the performance of all counters by finding the highest
number of items sold, the lowest number of items sold, and the total items sold.
Write a C program to perform this analysis by passing the array of sales data from main() to
user-defined functions.
1. 2. 3. 4. Read the number of billing counters.
Read the number of items sold at each counter and store them in an array.
Pass the array as an actual parameter to functions.
In the functions, receive the array using pointer as the formal parameter.
5. Write separate functions to:
o find the total items sold
o find the highest items sold
o find the lowest items sold
6. Display all the results clearly.
Sample input and output:
Enter the number of billing counters:
5
Enter the number of items sold at each counter:
120 95 150 80 110
Sales Analysis Report
Total items sold: 555
Highest items sold: 150
Lowest items sold: 80*/
#include<stdio.h>

int total(int *a, int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    return sum;
}


int highest(int *a, int n)
{
    int max = a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }

    return max;
}


int lowest(int *a, int n)
{
    int min = a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }

    return min;
}

int main()
{
    int n;

    printf("Enter the number of billing counters:\n");
    scanf("%d", &n);

    int a[n];

    printf("Enter the number of items sold at each counter:\n");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int t = total(a, n);
    int h = highest(a, n);
    int l = lowest(a, n);

    printf("\nSales Analysis Report\n");

    printf("Total items sold: %d\n", t);

    printf("Highest items sold: %d\n", h);

    printf("Lowest items sold: %d\n", l);

    return 0;
}