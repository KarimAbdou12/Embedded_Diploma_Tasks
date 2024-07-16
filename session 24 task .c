
//search of string by binary search

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int arrayofstring_binarysearch (char **arr, int size,char *s)
{
    arrayofstring_sort(arr,9);
    arrayofstring_print(arr,9);

    int first,last,middle,c=0;
    first=0;
    last=size-1;
    int i,x;
    while(1)
    {
        c++;
        middle=(first+last)/2;
        if(*(arr[middle])==(*s))
        {
            x=string_compare2(arr[middle],s);
            if(x==1)
            {
                return middle;
            }

        }
        else if(*(arr[middle])>s[0])
        {
            last=middle-1;
        }
        else
        {
            first=middle+1;
        }
        if(first>last)
        {
            return -1;
        }

    }

    printf("%d \n",c);
    return -1;


}


int main()
{
    char s1[]="ahmed saad";
    char s2[]="nada";
    char s3[]="osama";
    char s[]="bahy";

    char *arr[]= {s1,s3,s2,"moatas","bahy","fathy","mohamed","karim","abdelraman"};

    
    int ind =arrayofstring_binarysearch(arr,9,s);
    printf("%d\n",ind);

    return 0;
}
/***********************************************************/

static int i=0,j=0;
void arrayofstring_search2 (char **arr, int size,char ch)
{

    for(i=0; i<size;i++)
    {
        for(j=0; arr[i][j];j++)
        {
            if(arr[i][j]==ch)
            {
                return;
            }
        }

    }
}

int main()
{
    char s1[]="ahmed saad";
    char s2[]="nada";
    char s3[]="osama";
    // char s[]="bahy";

    char *arr[]= {s1,s2,s3,"moatas","bahy","fathy","mohamed","karim","abdelraman"};

    arrayofstring_search2(arr,9,'s');
    printf("string : %d char : %d\n",i,j);

    return 0;
}
/**********************************************/