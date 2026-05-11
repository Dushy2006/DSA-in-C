/*
Program 5: – Jack Level
Write a C program to: Read a 3 × 3 matrix. Check whether it is an identity matrix.

Sample input:
Enter elements of 3 x 3 matrix:1 0 00 1 00 0 1

Sample output:
The matrix is an Identity Matrix.

1 0 00 5 00 0 1
The matrix is NOT an Identity Matrix.
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
   int count=0,count_a=0;
   for(int i=0;i<m;i++){
    for (int j=0;j<n;j++){
      if(i==j)
      {
        if(a[i][j]==1)
        count++;

      }
      else{
        if(a[i][j]==0)
        count_a++;
      }
    }
}
    if(count==m && count_a==((m*n)-m))
    {
        printf("The matrix is an identity matrix");
    }
    else{
        printf("The matrix is  not an identity matrix");
    }
    return 0;
}
   