/*Program 2: Banana Level
A student registration system stores a student's first and last name as two separate strings. The
system also needs to check whether two entered names are the same, copy one name into
another variable, and find the total length of the full name. Write a C program to perform the
following operations using the built-in string functions strlen(), strcpy(), strcmp(), and strcat():
1) 2) 3) 4) 5) Read the first name and last name of a student.
Concatenate the first name and last name to form the full name.
Find and display the length of the full name.
Copy the full name into another string variable.
Compare the copied name with another name entered by the user and display whether
both are same or different.
Sample input and output:
Enter the first name of the student: PES
Enter the last name of the student: University
Full name of the student: PES University
Length of the full name: 14
Copied name: PES University
Enter another full name to compare PESIT Bangalore
Both names are different.*/
#include<stdio.h>
#include<string.h>

int main()

{
char a[100];
char b[100];
char c[100];
char d[100];
char e[100];
printf("Enter the first name:\n");
scanf("%[^\n]s",a);
printf("Enter the last name:\n");
scanf(" %[^\n]s",b);
strcat(a," ");
strcat(a,b);
strcpy(d,a);
int k=0;
while(a[k]!='\0'){
    k++;
    }
printf("Full name of the student is:%s\n",a);
printf("Length of the full name is :%d\n",k);
printf("Copied name is :%s\n",d);
printf("Enter another full name to compare the string:");
scanf("%s",e);
int l;
l=strcmp(a,e);
if(l>0 || l<0){
    printf("Both strings are different");
}
else{
        printf("Both strings are same");
}
return 0;
}