
#include "student.h"

int student_search (struct student *arr,int size,char *str)
{
    int i,j=0,flag=1;

    for(i=0; i<size; i++)
    {
        flag=1;

        for(j=0; arr[i].name[j]||str[j]; j++)
        {
            char x=arr[i].name[j];
            char y=str[j];
            if((x)!=(y))
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    struct student course [7]= {{"bahy ahmed",21,'a'},
        {"fathy mohamed",20,'b'},
        {"kamel 3nsawy",20,'c'},
        {"ethar naser",21,'a'},
        {"mohamed magdy",21,'d'},
        {"ali reda",21,'a'},
        {"karim abdo",22,'b'}
    };

    char str[20]="ali reda";
    int r=student_search(course,7,str);
    if(r==-1)
        printf("not found\n");
    else
    printf("index=%d\n",r);

    return 0;
}
/***************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#include "student.h"


void sort_struct_age_selection (struct student*arr,int size)
{
    struct student temp;
    int i,j,max,last=size-1;

    for(j=0;j<size;j++)
    {
        max=0;

        for(i=0;i<=last;i++)
        {
            if(arr[i].age>=arr[max].age&&!(i==max))
            {
                if(arr[i].age==arr[max].age)
                {
                  int r= max_char(arr[i].name,arr[max].name);
                  if(r==1)
                  {
                      max=i;
                  }
                }
                else
                {
                     max=i;
                }

            }

        }
        temp=arr[last];
        arr[last]=arr[max];
        arr[max]=temp;
        last--;

    }

}

int max_char(char *stri,char *strmax)
{
    for(int i=0;stri[i]||strmax[i];i++)
    {
        if(stri[i]>strmax[i])
        {
            return 1;
        }
        else if(strmax[i]>stri[i])
        {
            return 0;
        }
    }
    return 0;
}

int main()
{
    struct student course [8]= {{"bahy ahmed",21,'a'},
        {"fathy mohamed",23,'b'},
        {"kamel ansawy",25,'c'},
        {"ethar naser",19,'a'},
        {"mohamed magdy",20,'d'},
        {"ali reda",21,'a'},
        {"karim abdo",22,'b'},
        {"mohamed yaser",21,'c'}


    };

   sort_struct_age_selection(course,8);
   student_printall(course,8);
    return 0;
}


/***************************************************/

