#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int  x=5;
    unsigned int  y=3,z=0;
    unsigned int n1,n2;

    printf("enter first number:");
    scanf("%d",&n1);
    printf("enter second number:");
    scanf("%d",&n2);
    // printf("%d   %d\n",n1,n2);
    if(n1>n2)
    {
        printf("  %d  first is bigger",n1);
    }
    else if(n2>n1)
    {
        printf("  %d  second is bigger",n2);
    }
    else
    {
        printf("equal\n");
    }

    return 0;

}
