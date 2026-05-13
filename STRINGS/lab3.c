/*
Program 3: Orange Level
A login system stores a password as a string. Write a C program using pointer arithmetic to
check whether the entered password exactly matches the stored password without using built-
in string functions.
Sample input and output:
Enter the password: PESU
Password did not match. Access denied.
Enter the password: PES123
Password matched. Access granted.*/
#include<stdio.h>
int main(){
    
    char a[]="Pes@123";
    char b[100];
    printf("Enter the password:\n");
    scanf("%[^\n]s",b);
    int i=0,c=0;
    while(a[i]!='\0'){
        c++;
        i++;

    }
    int j=0,c1=0;
    while(b[j]!='\0'){
        c1++;
        j++;

    }
    int c2=0;
    if(c==c1)
    {
        for(int z=0;z<c;z++)
        {
            if(a[z]==b[z])
            {
                c2++;
            }
        }

    }
    if(c2==c){
        printf("Access granted\n");
    }
    else{
        printf("Password did not match. Access denied.");
    }
    
return 0;

}