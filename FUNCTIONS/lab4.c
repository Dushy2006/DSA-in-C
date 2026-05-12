/*Program 4: - Orange Level
Write a C function that accepts an array of integers representing the current stock of books. The function should calculate and return the average stock of all books. Use a pointer to traverse through the array.
Sample Input
Enter number of books: 5Enter stock of 5 books:10 20 30 40 50
Sample output:
Average stock of books = 30.00

*/
#include<stdio.h>
float avg(int *a,int n){
    int sum=0;
        for (int i=0;i<n;i++){
            sum=sum + *(a+i);


}
float avg1;
return avg1=sum/n;
}

int main()
{
    int n;
    float k;
    printf("Enter the no. of books u want to enter:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the stock of %d books:\n",n);
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    k=avg(a,n);
    printf("Average stock of books =%f\n",k);
    return 0;


}