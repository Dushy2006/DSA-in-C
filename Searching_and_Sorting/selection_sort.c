/*Program 3: Banana Level
Write a C program to sort a given list of elements using the Selection Sort method.
The program should:
 accept n array elements as input,
 sort them in ascending order using selection sort,
 display the array before and after sorting.
Sample input and output:
Enter the number of elements:
10
Enter the array elements:
2 3 1 4 5 3 8 9 10 1
Array before sorting:
2 3 1 4 5 3 8 9 10 1
Array after sorting in ascending order:
1 1 2 3 3 4 5 8 9 10*/
#include<stdio.h>
int main(){
    int n;
 
    printf("Enter the no. of elements  u want to enter:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter  %d elements:\n",n);
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    printf("Before sorting:\n");
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);

    }
    int pos;
    for(int j=0;j<n-1;j++){
        pos=j;
        for(int k=(j+1);k<n;k++){
              if(a[pos]>a[k]){
                pos=k;
              }
        }
        if(pos!=j){
            int k=a[pos];
            a[pos]=a[j];
            a[j]=k;

        }
    }
    printf("After sorting:\n");
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);

        
    }

    return 0;
}
