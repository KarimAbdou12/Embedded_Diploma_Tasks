
/*take 2 number from user and print prime number between them */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,flag,j,m,min,max;

    while(1)
    {
        printf("enter two number : ");
        scanf("%d%d",&n,&m);
        max=n;
        min=m;
        if(m>max)
        {
            max=m;
            min=n;
        }
        for(i=min+1; i<max; i=i+1)
        {
            flag=1;
            if(1==i)
            {
                flag=0;
            }
            for(j=2; j<i&&flag==1; j=j+1)
            {
                if(i%j==0)
                {
                    flag=0;
                }

            }
            if(flag==1)
                printf("%d ",i);
        }
        printf("\n");
    }

    return 0;

}
/*********************************************************/
 //pattern printed
    *
   ***
  *****
 *******
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total,row,symbol,space;

    while(1)
    {
        printf("enter number of rows : ");
        scanf("%d",&total);

        for(row=1; row<=total; row++)
        {
            //2- space
            //1- symbol
            for(space=1; space<=(total-row); space++)
            {
                printf(" ");
            }
            for(symbol=1; symbol<=(2*row)-1; symbol++)
            {
                printf("*");

            }
            printf("\n");
        }
    }

    return 0;

}
/****************************************************/
*****
****
***
**
*

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total,row,symbol;

    while(1)
    {
        printf("enter number of rows : ");
        scanf("%d",&total);

        for(row=0; row<total; row++)
        {
            //1- symbol
            for(symbol=1; symbol<=(total-row); symbol++)
            {
                printf("*");

            }
            printf("\n");
        }
    }

    return 0;

}
/**********************************************************/
*
**
***
****
*****

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total,row,symbol;

    while(1)
    {
        printf("enter number of rows : ");
        scanf("%d",&total);

        for(row=1; row<=total; row++)
        {
            for(symbol=1; symbol<=row; symbol++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;

}
/********************************************************/
*     *
 *   *
  * *
   *
  * *
 *   *
*     *

#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed int total, column, row;

    while(1)
    {
        printf("enter number of rows (odd number ): ");
        scanf("%d",&total);

        for(row=0; row<total; row++)
        {
            for(column=0; column<total; column++)
            {
                if(row==column||(row+column)==(total-1))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    return 0;

}
/************************************************************/