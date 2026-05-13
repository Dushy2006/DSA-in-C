
/*
Program 4: Jack Level
Write a C program using:
 array of structures
 pointer to structure
Store the details of n employees such as employee ID, name, number of projects completed,
and performance score. Use a pointer to the first element of the array of structures and access
the members using pointer notation. Display all employee details. Also print the names of
employees who completed more than 5 projects and those who scored 8.0 or above in
performance.
Sample input and output:
Enter the number of employees: 3
Enter details of Employee 1
Enter Employee ID: 101
Enter Employee Name: Rahul
Enter Number of Projects Completed: 6
Enter Performance Score: 8.5
Enter details of Employee 2
Enter Employee ID: 102
Enter Employee Name: Sneha
Enter Number of Projects Completed: 4
Enter Performance Score: 7.8
Enter details of Employee 3
Enter Employee ID: 103
Enter Employee Name: Arjun
Enter Number of Projects Completed: 8
Enter Performance Score: 9.1
Sample output:
========== Employee Details ==========
Employee 1
Employee ID : 101
Employee Name : Rahul
Projects Completed : 6
Performance Score : 8.50
Employee 2
Employee ID : 102
Employee Name : Sneha
Projects Completed : 4
Performance Score : 7.80
Employee 3
Employee ID : 103
Employee Name : Arjun
Projects Completed : 8
Performance Score : 9.10
========== Employees with More Than 5 Projects ==========
Employee ID: 101, Name: Rahul, Projects: 6
Employee ID: 103, Name: Arjun, Projects: 8
========== Employees with Performance Score >= 8.0 ==========
Employee ID: 101, Name: Rahul, Score: 8.50
Employee ID: 103, Name: Arjun, Score: 9.10
*/
#include<stdio.h>

struct Employee{
    int empid;
    char name[100];
    int pno;
    float pscore;
};

int main(){
    int n;

    printf("Enter the number of employees:\n");
    scanf("%d",&n);

    struct Employee e[n];
    struct Employee *p = e;


    for(int i=0;i<n;i++){
        printf("Enter details of Employee %d\n",(i+1));

        printf("Enter Employee ID:\n");
        scanf("%d",&(p+i)->empid);

        printf("Enter Employee Name:\n");
        scanf(" %[^\n]", (p+i)->name);

        printf("Enter Number of Projects Completed:\n");
        scanf("%d",&(p+i)->pno);

        printf("Enter Performance Score:\n");
        scanf("%f",&(p+i)->pscore);
    }


    printf("\n========== Employee Details ==========\n");
    for(int i = 0; i < n; i++){
        printf("Employee %d\n", i+1);
        printf("Employee ID : %d\n", (p+i)->empid);
        printf("Employee Name : %s\n", (p+i)->name);
        printf("Projects Completed : %d\n", (p+i)->pno);
        printf("Performance Score : %.2f\n", (p+i)->pscore);
    }


    printf("\n========== Employees with More Than 5 Projects ==========\n");
    for(int i = 0; i < n; i++){
        if((p+i)->pno > 5){
            printf("Employee ID: %d, Name: %s, Projects: %d\n",
                   (p+i)->empid,
                   (p+i)->name,
                   (p+i)->pno);
        }
    }


    printf("\n========== Employees with Performance Score >= 8.0 ==========\n");
    for(int i = 0; i < n; i++){
        if((p+i)->pscore >= 8.0){
            printf("Employee ID: %d, Name: %s, Score: %.2f\n",
                   (p+i)->empid,
                   (p+i)->name,
                   (p+i)->pscore);
        }
    }

    return 0;
}