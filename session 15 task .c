
#include <stdio.h>
#include <stdlib.h>

void string_compare (char *str1,char *str2)
{
    int i,j,flag=0;
    for(i=0; str1[i]||str2[i]; i++)
    {
         if(str2[i]>='A'&&str2[i]<='Z')
        {
            str2[i]=str2[i]-'A'+'a';
        }
        if(str1[i]==str2[i])
        {
            flag=1;
        }
        else
        {
            printf("not same\n");
            return;
        }
    }
    if(flag==1)
    {
        printf("same\n");
    }

}

int main()
{
    char str1[]="mohamed ahmed";
    char str2[]="MOHAMED AHMED";

    string_compare(str1,str2);

    return 0;
}
/*********************************/