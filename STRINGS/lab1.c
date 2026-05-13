/*Write a C program to: declare a character array as a string, initialize it with a value, display the
string, count the number of characters in the string, and find and display the character that
appears the most number of times in the string.
Sample input and output:
The string is: programming
Number of characters in the string: 11
The character that appears the most number of times is: r
It appears 2 times
*/
#include<stdio.h>
int main(){
    char a[100];
    printf("Enter a string:\n");
    scanf("%[^\n]s",a);
    int i=0;int count=0;
    while(a[i]!='\0'){
count++;
i++;
    }
    printf("The number of characters:%d\n",count);


int c2=0;

int visited[100];

char ch;
for(int j=0;j<count;j++){
    if(visited[j]==1)
    continue;
    int c1=0;
   
for(int k=0;k<count;k++){
    if(a[j]==a[k]){
        c1++;
        visited[k]=0;
    }
    
}
if(c2<c1){
        c2=c1;
        ch=a[j];
    }
}
printf("the character which appears more times is %c and it appears %d times:",ch,c2);
return 0;
}