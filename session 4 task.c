
//your_grade
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x ;

    printf("Enter your mark between 0 to 100 : ");
    scanf("%d",&x);


    if (x>=0 && x<=100)
    {
        if(x>=0 && x<50)
        {
            printf(" your grade is F \n");
        }
        else if(x>=50 && x<60)
        {
            printf(" your grade is D \n");
        }
        else if(x>=60 && x<70)
        {
            printf(" your grade is C \n");
        }
        else if(x>=70 && x<80)
        {
            printf(" your grade is B \n");
        }
        else
        {
            printf(" your grade is A \n");
        }
    }
    else
    {
        printf("please Enter mark between 0 to 100 ");
    }

    return 0;
	
}

/***************************************************************/