//swap bytes in short 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int flag,num,i,j;

    unsigned short x=0xff55;
    x=x>>8|x<<8;
    printf("%X",x);


    return 0;

}
/*****************************************/
//swap by using pointer
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned short x;
    unsigned char temp , *p=&x;
    x=0x33ff;
     temp=*p;
     *p=*(p+1);
     *(p+1)=temp;
     printf("%x\n",x);

}
/******************************************/
//subtract 2 numbers without '-'
//by using 2'complement (digital electronics)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {

        int x,y;
        printf("enter first nom - second nom :\n");
        scanf("%d%d",&x,&y);

        printf("%d - %d = %d \n",x,y,x+~y+1);

    }
}
/**************************************/
// by usnd X-OR ( ^ )

#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {

        int x,y;
        printf("enter first nom - second nom :\n");
        scanf("%d%d",&x,&y);

        printf("%d - %d = %d \n",x,y,x+(y^0xffffffff)+1);

    }
}
/************************************/