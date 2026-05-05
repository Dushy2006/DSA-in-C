#include<stdio.h>
#include<string.h>

int main(){
   char a[100];
   char b[100];
   char c[100];
   char d[100];
   printf("Enter a string 1:");
   scanf("%s",a);
   //strlen
   printf("The length of the entered string 1 is :%lu\n",strlen(a));
   //strcpy
   strcpy(c,a);
   printf("'The string 3 is:%s\n",c);
   //strncpy
   strncpy(b,a,2);
   printf("The string 2 is:%s\n",b);
   //strcat
   strcat(a,b);
   printf("The concated string is:%s\n",a);
   //strcmp and strncmp
   printf("strcmp(a,b):%d",strcmp(a,b));
   printf("strncmp(a,b):%d",strncmp(a,b,2));
   //strchr
    char str[] = "dushyant";

    char *res = strchr(str, 'y');

    if (res != NULL)
        printf("Found at: %ld", res-str);
    else
        printf("Not found\n");
        //strrchr
    char str2[]="banana";
    char *ptr=strrchr(str2,'a');
    if(ptr!=NULL){
        printf("Found at:%lu\n",ptr-str2);
    }
    else{
       printf("Not found\n");
    }
    //strstr
    char rt[]="helloworld";
    char *ptr1=strstr(rt,"world");
    if(ptr1!=NULL){
        printf("Found at:%lu\n",ptr1-rt);
    }
    else{
       printf("Not found\n");
    }
    //strtok
    char de[]="apple,banana,orange";
    char *ptr3=strtok(de,',');
    if(ptr3!=NULL){
        printf("Token:%s\n",ptr3);
        ptr3=strtok(NULL,",");
        
    }
    
   return 0;
}