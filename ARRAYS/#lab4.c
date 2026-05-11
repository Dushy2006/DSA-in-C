/*
Program 4: - Orange Level
Write a C program to: Read a 3 × 3 matrix 
Calculate and display the sum of each row. 
Calculate and display the sum of each column. 
Sum of main diagonal elements 
Sum of secondary diagonal elements

Sample Input:
Enter elements of 3 x 3 matrix:Element [0][0]: 1Element [0][1]: 2Element [0][2]: 3Element [1][0]: 4Element [1][1]: 5Element [1][2]: 6Element [2][0]: 7Element [2][1]: 8Element [2][2]: 9

Sample output:
Sum of each row:Row 1 sum = 6Row 2 sum = 15Row 3 sum = 24Sum of each column:Column 1 sum = 12Column 2 sum = 15Column 3 sum = 18Sum of main diagonal elements = 15Sum of secondary diagonal elements = 15

*/
#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the no. of rows :\n");
    scanf("%d",&m);
      printf("Enter the no. of columns :\n");
    scanf("%d",&n);
    int a[m][n];
    printf("Enter %d elements:\n",(m*n));
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //row sum
    printf("Sum of each row\n");
    for (int i=0;i<m;i++){
        int sum=0;
        for (int j=0;j<n;j++){
            sum =sum+a[i][j];


        }
        printf("Row %d sum=%d\n",(i+1),sum);
    }
    //column sum
    printf("Sum of each column\n");
    for (int i=0;i<n;i++){
        int sum=0;
       for (int j=0;j<m;j++){
            sum =sum+a[i][j];
    }
   printf("Column %d sum=%d\n",(i+1),sum); 

}
int sum1=0;
for (int i=0;i<n;i++){
        
       for (int j=0;j<m;j++){
            if(i==j){
                sum1=sum1 +a[i][j];
            }
    }
   

   
}
printf("Sum of main Diagonal elements is:%d\n",sum1);
int sum2=0;
int c=(m-1);
for (int i=0;i<n;i++){
        
       sum2=sum2+a[i][c];
       c--;
    }
   


printf("Sum of secondary Diagonal elements is:%d\n",sum2);
return 0;
}