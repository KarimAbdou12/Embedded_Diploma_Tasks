
#include <stdio.h>
#include <stdlib.h>

int take_temp[]={1,2,3,4,5,20,10,50,3010,20,30,40,50,60,70,80,90,100,111,222,333,444};
int size = sizeof(take_temp)/sizeof(take_temp[0]);
int arrt[10];

int get_lasttemp (int ind)
{
    int j=0;
    for(int i=0; i<size; i++)
    {
        if(i<10)
        {
            arrt[i]=take_temp[i];
        }
        else if(i>9)
        {
            for(int k=0; k<9; k++)
            {
                arrt[k]=arrt[k+1];
            }
            arrt[9]=take_temp[i];
        }
    }
    if(size>=10)
    {
        return arrt[10-ind];
    }
    else
    {
        return arrt[size-ind];
    }
}

void get_last10 (int *arr)
{
    int i=0,j;
    if(size<10)
    {
        j=size-1;
    }
    else
    {
       j=9;
    }
    for(; j>-1;)
        {
            arr[i]=arrt[j];
            j--;
            i++;
        }
}

int main()
{
    int arr[10];
    int x=get_lasttemp(4);
    printf("%d\n",x);
    get_last10(arr);
    if(size>10)
    array_print(arr,10);
    else if(size<10)
    array_print(arr,size);

    return 0;
}
