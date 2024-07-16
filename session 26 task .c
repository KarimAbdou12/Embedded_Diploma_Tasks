
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static i,j;

void star_print(char arr[][100],int row,int col)
{
    int i,j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }
    printf("===================\n");
}

void set_star (char arr[][100],int row,int col,int x, int y)
{
    int i,j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            arr[i][j]='0';
            if(j==y&&i<x)
            {
                arr[i][j]='v';
            }
            else if(i>x&&j==y)
            {
                arr[i][j]='^';
            }
            else if(i==x&&j<y)
            {
                arr[i][j]='>';
            }
            else if(i==x&&j>y)
            {
                arr[i][j]='<';
            }
            else if(i<x&&j>y)
            {
                arr[i][j]='/';
            }
            /* else if(i>x&&j<y)
             {
                 arr[i][j]='/';
             }*/
            else if(i>x&&j>y)
            {
                arr[i][j]='\\';
            }
            else if(i<x&&j<y)
            {
                arr[i][j]='A';
            }


        }
    }
    arr[x][y]='*';
}

int find_star (char arr[][100],int row,int col)
{

    int first_r=0,last_r=row;
    int first_c=0,last_c=col;
    int flag=1;
    while(flag)
    {
        i=(first_r+last_r)/2;
        j=(first_c+last_c)/2;

        if(arr[i][j]=='*')
        {
            flag=0;
        }
        else if(arr[i][j]=='v')
        {
            first_r=i;
        }
        else if(arr[i][j]=='^')
        {
            last_r=i;
        }
        else if(arr[i][j]=='>')
        {
            first_c=j;
        }
        else if(arr[i][j]=='<')
        {
            last_c=j;
        }
        else if(arr[i][j]=='/')
        {
            first_r=i;
            last_c=j;
        }
        else if(arr[i][j]=='A')
        {
            first_r=i;
            first_c=j;
        }
        else if(arr[i][j]=='0')
        {
            first_r=i;
            last_c=j;
        }
        else if(arr[i][j]=='\\')
        {
            last_r=i;
            last_c=j;
        }

    }

}

int main()
{

    char arr[100][100];
    int row,col,x,y;

    /*scanf("%d%d",&row,&col);
    printf("set star position\n");
    scanf("%d%d",&x,&y);*/

    set_star(arr,20,20,19,19);
    star_print(arr,20,20);
    find_star(arr,20,20);

    printf("%d  %d\n",i,j);
    printf("%c",arr[i][j]);

    return 0;
}


