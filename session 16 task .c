// integer to string (handle cotner cases)

#include <stdio.h>
#include <stdlib.h>
 
void inttostring (int num,char *str)
{
    int rem,i=0,flag;
    if(num>=0)
    {
        flag=0;
    }
    else
    {
        num=num*-1;
        flag=1;
    }
    if(num==0)
    {
        str[0]='0';
        // str[1]=0;
        return ;
    }
    while(num)
    {
        rem=num%10;
        str[i]=rem+'0';
        i++;
        num/=10;;
    }
    if(flag==0)
    {
        str[i]=0;
    }
    else
    {
        str[i]='-';
        str[i+1]=0;
    }

    string_reverse(str);

}
int main()
{
	char str[50];
    int num=-12354;
    inttostring(num,str);
    for(int i=0; str[i]; i++)
    {
        printf("%c ",str[i]);
    }
  return 0;
}
/***********************************/
// ternary operator (?)
//condition ? exp. : exp. ;

int main()
{int age=20;

    (age>18) ? printf("true\n"),printf("%d\n",age+18): (printf("false\n"),printf("false\n"));

    return 0;
}
/****************************/