//create variable long long and print each byte 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long x=0X33eeffccdd5522aa;
    unsigned char*p=&x , i;
    for(i=0; i<8; i++)
    {
        printf("%d  %X\n",*(p+i),*(p+i));
    }
}
/****************************************/