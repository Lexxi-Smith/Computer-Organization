#include<stdio.h>

#include<string.h>

#include "student.h"

void AverageGPA(struct Student s[],int n)

{

    float average = 0;
    int index;
    for(index=0;index<n;index++)    

        average=average+s[index].gpa;

    

    average=average/n;

    printf("Average GPA: %f",average);    

}
void HighestGPAStudent(struct Student s[],int n)

{

    float highest=s[0].gpa;

    char name[100];

    strcpy(name,s[0].name);
    int index;

    for(index=0;index < n;index++)

    {

        if(s[index].gpa>highest)

        {

            highest=s[index].gpa;

            strcpy(name,s[index].name);

        }

    }

    printf("\nStudent with highest GPA: %s",name);

}

void HigherthanAverage(struct Student s[],int n)

{

    float average = 0;

    int higher = 0;
    int index = 0;
    for(index=0;index<n;index++)

        average=average+s[index].gpa;



    average=average/n;

    for(index=0;index<n;index++)

    {

        if(s[index].gpa>average)

            higher++;

    }

    printf("\nStudents with GPA higher than average: %d\n",higher);

}

void AverageAge(struct Student s[],int n)

{

    int average=0;
    int index;
    int size = n-1;
    for(index = 0; index <= size;index++)

        average=average+s[index].age;



    average=average/n;

    printf("\nAverage age of students is: %d",average);

}

void readfile(FILE *file_pointer)

{

    struct Student s[100];

    int index=0,n;

    while(!feof(file_pointer))
    {

    fscanf(file_pointer,"%s%d%f%d",s[index].name,&s[index].id,&s[index].gpa,&s[index].age);

    index++;

    }

    AverageGPA(s,index);

    HighestGPAStudent(s,index);

    HigherthanAverage(s,index);

    AverageAge(s,index);

}

void main()

{

    FILE *file_pointer;

    char input_file[100];

    printf("Enter a file name:");

    scanf("%s",input_file);

    file_pointer=fopen(input_file,"r");

    readfile(file_pointer);

}
