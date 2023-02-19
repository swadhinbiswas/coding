#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct students{
    char name[50];
    char id[50];
    char section;
    int age;


};

void printStudent(struct students student)
{
    printf("Student name: %s\n",student.name);
    printf("Student ID: %s\n",student.id);
    printf("Section: %c\n",student.section);
    printf("Student age: %d",student.age);
}
int main()
{
    struct students student1,student2;

    printf("For student 1: \n");
    printf("Enter the student name: ");
    gets(student1.name);
    printf("Enter student ID: ");
    gets(student1.id);
    printf("Enter section: ");
    scanf("%c",&student1.section);
    printf("Enter student age: ");
    scanf("%d",&student1.age);



    printf("For student 2: \n");
    printf("Enter the student name: ");
    gets(student2.name);
    printf("Enter student ID: ");
    gets(student2.id);
    printf("Enter section: ");
    scanf("%c",&student2.section);
    printf("Enter student age: ");
    scanf("%d",&student2.age);



    printf("Details of student 1: \n");
    printStudent(student1);

    printf("Details of student 2: \n");
    printStudent(student2);
    
    return 0;

}
