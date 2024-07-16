
#include <stdio.h>
#include <stdlib.h>


int main()
{
    while(1)
    {

        float num;
        int grade,rem;
        printf("enter degree :\n");
        scanf("%f",&num);

        grade=num*10;
        rem=grade%10;
        if(rem>=5)
        {
            printf(" your grade = %d\n",(grade-rem+10)/10);
        }
        else if(rem<5)
        {
            printf(" your grade = %d\n",(grade-rem)/10);
        }
    }

    return 0;
}
/***************************************/