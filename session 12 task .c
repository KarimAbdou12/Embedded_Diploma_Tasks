//remove prime in array 

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
    if(flag==0)
    {
        return 1;
    }
}

void array_removeprime (int *arr, int size )
{
    unsigned int i,x,flag;
    for(i=0; i<size; i++)
    {
        if(isprime(arr[i])==1)
        {
            arr[i]=0;
        }
        printf("%d\t",arr[i]);
    }

}
int main()
{

    int arr[10]= {20,70,3,60,7,13,55,17,33,19};
    array_removeprime(arr,10);


    return 0;
}

/***************************************/