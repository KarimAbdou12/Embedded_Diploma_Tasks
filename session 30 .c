
int main()
{
    struct student s1,s2,s3= {"karim",21,'a'},arr[10];
    s1.name[0]='a';
    s1.age =12;
    s1.grade='A';

    struct student course [10]= {{"bahy",21,'a'},
        {"fathy",20,'b'},
        {"3nsawy",20,'c'},
        {"ethar",21,'a'},
        {"magdy",21,'d'},
        {"ali",21,'a'}
    };

    struct student*p=&course[1];


   /* student_print(course[2]);
    student_print(*(p+1));
    student_printByRef(&course[0]);
    s1=student_scan();
    student_print(s1);*/

    student_printall(course,6);

    return 0;
}
/*********************************************/

student.c

#include "student.h"

#include <stdio.h>
#include <stdlib.h>



void student_print (struct student s)
{
    printf("name:");
    string_print(s.name);
    printf("\nage:%d\ngrade:%c\n",s.age,s.grade);
    printf("===========================\n");
}


void student_printByRef(struct student* ps)
{
    printf("name:");
    string_print((*ps).name);//(*ps).name = ps->name (address)as nmae is array
    printf("\nage:%d\ngrade:%c\n--------------------------------\n",ps->age,ps->grade);// ps->age = (*ps).age || ps->grade = (*ps).grade
}

struct student student_scan(void )
{
    struct student s;
    printf("enter name:");
    string_scan(s.name,20);
    printf("enter age:");
    scanf("%d",&s.age);
    fflush(stdin);
    printf("enter grade:");
    scanf("%c",&s.grade);

    return s;

}


void student_scanByRef(struct student *ps)
{

    printf("enter name:");
    string_scan(ps->name,20);
    printf("enter age:");
    scanf("%d",&(ps->age));
    fflush(stdin);
    printf("enter grade:");
    scanf("%c",&ps->grade);

}

void student_printall (struct student *arr,int size)
{
  /*  int i;
    for(i=0;i<size;i++)
    {
        student_print(arr[i]);
    }*/
    /***************************/

    int i;
    for(i=0;i<size;i++)
    {
        printf("name:%s \t age:%d \t grade:c\n",arr[i].name,(arr+i)->age,(*(arr+i)).grade);//(arr+i).name
    }



    /*****************************/
   /* for(int i=0;i<size;i++)
    {
        student_printbyref(&arr[i]);//arr+i
    }*/

}

/********************************************/

student.h


struct student
{

    char name[20];

    int age;
    char grade;

};


void student_print(struct student s);

void student_printByRef(struct student *ps);

struct student student_scan(void );

void student_scanByRef(struct student *ps);


void student_printAll(struct student *arr,int size);

/*************************************/