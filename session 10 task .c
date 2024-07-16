//swap 4 bytes by using bitwise
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x=0xffee5533;

    printf("%x\n\n",x);

   unsigned short*p;

    x=x>>16|x<<16;
    p=&x;
    *p=*p>>8|*p<<8;
    *(p+1)=*(p+1)>>8|*(p+1)<<8;

    printf("%x\n\n",x);

}
/***************************************/
//swap 4 bytes by using pointer

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0xffee5533;

    printf("%x\n\n",x);

    short*p1=&x,temp1;
    char*p2,temp2;

    temp1=*p1;
    *p1=*(p1+1);
    *(p1+1)=temp1;

    p2=&x;
    temp2=*p2;
    *p2=*(p2+1);
    *(p2+1)=temp2;

    temp2=*(p2+2);
    *(p2+2)=*(p2+3);
    *(p2+3)=temp2;

    printf("%x\n\n",x);
}
/**************************************/
//swap 4 bytes by using pointer and bitwise 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x=0xffee5533;

    printf("%x\n\n",x);

    char*p,temp;

    x=x>>16|x<<16;

    p=&x;
    temp=*p;
    *p=*(p+1);
    *(p+1)=temp;

    temp=*(p+2);
    *(p+2)=*(p+3);
    *(p+3)=temp;

    printf("%x\n\n",x);

}
/*******************************************/
//function
#include <stdio.h>
#include <stdlib.h>
int isprime(unsigned int n)
{
    int i, flag=0;
    if(n<2)
    {
        flag=1;
    }

    for(i=2; i<n; i=i+1)
    {
        if(n%i==0)
        {
            flag=1;
        }
    }
    if(flag!=1)
    {
        return 1;
    }
}
void primebetween2numbers(int n1,int n2)
{
    char i,max,min;
    max=n1;
    min=n2;
    if(n2>max)
    {
        max=n2;
        min=n1;
    }
    for(i=min+1; i<max; i=i+1)
    {
        if(isprime(i)==1)
        {
            printf("%d\t",i);
        }
    }
    printf("\n");
    }
void generateprime (int n)
{
    int i,c=0;
    for(i=0;c<n;i++)
    {
        if(isprime(i)==1)
        {
            printf("%d\t",i);
            c++;
        }
    }
}
int main()
{

    /*if(isprime(6)==1)
    {
        printf("is prime\n\n");
    }
    else
    {
        printf("not prime\n\n");
    }*/

    //primebetween2numbers(10,12);

    //generateprime(100);


}
/****************************************/
//the min nom. between 2 numbers without (< >)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if((x%y)==x)
        {
            printf("%d is min\n",x);
        }
        else if((y%x)==y)
        {
            printf("%d is min\n",y);
        }
        else
        {
            printf("equal numbers \n");
        }
    }

}
/*******************************************/
//the min nom. between 3 numbers without (< >)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        int x,y,z,min;
        printf("input 3 numbers \n");
        scanf("%d%d%d",&x,&y,&z);
        min=x;
        if((y%min)==y)
        {
            min=y;
        }
        if((z%min)==z)
        {
            min=z;
        }
        printf("the %d is the min number\n",min);

    }
}
/***********************************************/