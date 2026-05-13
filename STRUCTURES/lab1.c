/*Program 1: Orange Level
A college wants to maintain the academic record of a student in a structured manner. For each
student, the following details are to be stored:
 Student ID
 Student Name
 Marks in three subjects
Write a C program using a structure to store the student details and a function to analyze the
result.
Requirements
1. Define a structure named Student with the following members:
o id to store the student ID
o name to store the student name
o m1, m2, and m3 to store marks in three subjects
2. In the main() function:
o Create a structure variable for one student
o Read the student details from the user
3. 4. Pass the entire structure variable to a function named analyzeStudent().
Inside the function, perform the following operations:
o Calculate the total marks
o Calculate the percentage using:
Percentage = Total / 3.0
 Determine whether the student is Pass or Fail using the following condition:
o If the student scores less than 35 in any one subject, the result is Fail
o Otherwise, the result is Pass
5. If the student passes, assign the grade based on the percentage using the following
conditions:
 Percentage greater than or equal to 90 → Grade A
 Percentage greater than or equal to 75 and less than 90 → Grade B
 Percentage greater than or equal to 60 and less than 75 → Grade C
 Percentage greater than or equal to 50 and less than 60 → Grade D
 Percentage less than 50 → Grade E
6. Display the following details inside the function:
o Student ID, Student Name, Marks in all three subjects, Total marks
o Percentage, Result, Grade
Sample input and output:
Enter Student ID: 101
Enter Student Name: Rahul
Enter marks in 3 subjects: 85 78 92
Student Details
ID : 101
Name : Rahul
Marks : 85.00 78.00 92.00
Total : 255.00
Percentage : 85.00
Result : Pass
Grade : B
*/
#include<stdio.h>
struct Student{
    int id;
    char name[100];
    int m1,m2,m3;
};
void analyzeStudent(struct Student s){
    int tmarks;
    tmarks=s.m1+s.m2+s.m3;
    float perc;
    perc=(tmarks/300.0)*100;
    int r;
    if(s.m1>=35 &&s.m2>=35&&s.m3>=35){

        r=1;

    }
    else{
        r=0;
    }
    printf("Student details:\n");
    printf("ID:%d\n",s.id);
    printf("Name:%s\n",s.name);
    printf("Marks1:%d\n",s.m1);
    printf("Marks2:%d\n",s.m2);
    printf("Marks3:%d\n",s.m3);
    printf("Total marks:%d\n",tmarks);
    printf("Percentage:%f\n",perc);
    if (r==1){
        printf("Result:Pass\n");
        if(perc>=90)
        printf("Grade: A\n");
        else if(perc>=75 && perc<90)
        printf("Grade :B\n");
         else if(perc>=60 && perc<75)
        printf("Grade :C\n");
         else if(perc>=50 && perc<60)
        printf("Grade :D\n");
         else 
        printf("Grade :E\n");
        
    }
    else{
        printf("Result:Fail\n");
    }
    }


int main(){
struct Student s;
printf("Enter Student id:\n");
scanf("%d",&s.id);
printf("Enter student name:\n");
scanf(" %[^\n]s",s.name);
printf("Enter marks of subject 1:\n");
scanf("%d",&s.m1);
printf("Enter marks of subject 2:\n");
scanf("%d",&s.m2);
printf("Enter marks of subject 3:\n");
scanf("%d",&s.m3);
analyzeStudent(s);
return 0;
}