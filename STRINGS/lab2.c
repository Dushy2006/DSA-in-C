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