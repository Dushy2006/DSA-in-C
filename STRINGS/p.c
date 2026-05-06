//argc and argv practice
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
   printf("Count of arguments:%d\n",argc);
   printf("argv[0] is %s\n",argv[0]);
   printf("argv[1] is %s\n",argv[1]);
   printf("argv[2] is %s\n",argv[2]);
   printf("argv[3] is %s\n",argv[3]);
   printf("sum is :%d\n",(atoi(argv[1])+atoi(argv[2])+atoi(argv[3])));
    return 0;
    
}