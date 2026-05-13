/*
Program 4: Orange Level
A student registration system stores a student’s first name and last name separately. Write a C
program using pointer arithmetic to combine both names into a full name, display it, and
count the number of characters in it without using built-in string functions.
Sample input and output:
Enter the first name: PES
Enter the last name: University
Full name: PES University
Number of characters in the full name: 14
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    char b[100];
printf("Enter the first name:\n");
scanf("%[^\n]s",a);
printf("Enter the last name:\n");
scanf(" %[^\n]s",b);
char *p;
char *q;
p=a;
q=b;
while(*p!='\0'){
    *p++;
    
}
*p=' ';p++;
while(*q!='\0'){
    *p=*q;*p++;*q++;
}
*p='\0';
printf("Full name:%s\n",a);
char *r=a;
int c=0;
while(*r!='\0'){
    *r++;
    c++;
    
}
printf("Number of characters in the full name: %d\n",c);
return 0;
}