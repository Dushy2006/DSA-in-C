/*2. Element repeated multiple times
Write a C program using functions. If the element occurs more than once in the
array, the program should identify that the element has multiple occurrences.
 You may display all positions or the count of occurrences.*/
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
    int k;
    printf("Enter the element to be searched:\n");
    scanf("%d",&k);
    int l=-1;
    int c=0;
    for(int m=0;m<n;m++){
        if(a[m]==k){
        printf("The element %d is found at %d position\n",k,l);
        l=m;
        c++;
        }
        

    }
   

    
    if(l==-1){
        printf("The element %d is not found in the array:\n",k);

    }
    printf("The no. of times the no. is repeated:%d",c);
    return 0;

}