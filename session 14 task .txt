//max and sec max 2 for loop

#include <stdio.h>
#include <stdlib.h>

int max_sec_max (int *arr,int s1,int *max,int *secmax)
{
    int i;
    for(i=0; i<s1; i++)
    {
       if(arr[i]>(*max))
       {
           *max=arr[i];
       }
    }
    for(i=0;i<s1;i++)
    {
        if(arr[i]>*secmax&&arr[i]<(*max))
        {
            *secmax=arr[i];
        }
    }
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int max=0,secmax=0;
    max_sec_max(arr,10,&max,&secmax);
    printf("max = %d\n sec max = %d",max,secmax);

    return 0;
}

/*********************************/
//max and sec max one for loop
#include <stdio.h>
#include <stdlib.h>

int max_sec_max (int *arr,int s1,int *max,int *secmax)
{
    int i;
    for(i=0; i<s1; i++)
    {
       if(arr[i]>(*secmax))
       {
           if(arr[i]>*max)
           {
               *secmax=*max;
               *max=arr[i];
           }
           else if(arr[i]!=*max)
           {
               *secmax=arr[i];
           }
       }
    }

}

int main()
{
    int arr[]={2000,1,2,3,4,5,3000,6,7,800,8,9,3000,10,3000,1,2,550,100,50,500,700,22,6000};
    int max=0,secmax=0;
    max_sec_max(arr,sizeof(arr)/sizeof(arr[0]),&max,&secmax);
    printf("max = %d\n sec max = %d",max,secmax);

    return 0;
}

/*********************************/
//birthday_candles one for loop

#include <stdio.h>
#include <stdlib.h>

int  birthday_candles (int *arr,int s1)
{
    int i,max=0,count=1,flag;
    for(i=0;i<s1;i++)
    {

        if(arr[i]>=max)
        {
            if(max==arr[i])
            {
                count++;
            }
            flag=max;
            max=arr[i];
        }

        if(flag!=max)
        {
            count=1;
        }

    }

    return count;

}

int main()
{
    int arr[]={1,2,200,5,6,8,200,4,500,74,48,56,6,60,200,100,1,2,55,200,300,300,300,300};
    int count=0;
   count= birthday_candles(arr,sizeof(arr)/sizeof(arr[0]));
    printf("max = %d",count);

    return 0;
}
/******************************************/
//for loop c switch case

int main() 
{
    int a, b,i;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
      for(i=a;i<=b;i++)
      {
          switch (i)
		  {
              case 1:
              printf("one\n");
              break;
              case 2:
              printf("two\n");
              break;
              case 3:
              printf("three\n");
              break;
              case 4:
              printf("four\n");
              break;
              case 5:
              printf("five\n");
              break;
              case 6:
              printf("six\n");
              break;
              case 7:
              printf("seven\n");
              break;
              case 8:
              printf("eight\n");
              break;
              case 9:
              printf("nine\n");
              break;
              default:
              if(i%2)
              {
                  printf("odd\n");
              }
              else 
			  {
                  printf("even\n");
              }
          }
      }

    return 0;
}
/*********************************/
//mix merging

#include <stdio.h>
#include <stdlib.h>

void  mix_merge (int *arr1,int s1,int *arr2,int s2)
{
    int i,j,temp;
    if (s1==s2)
    {
        j=s1-1;
        for(i=0,j;i<s1&&j>=0;i++,j--)
        {
           temp=arr1[i];
           arr1[i]=arr2[j];
           arr2[j]=temp;
        }
    }
    else
    {
        return ;
    }
    return ;
}

int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={10,20,30,40,50};
    int i,size;
    for(i=0;i<5;i++)
    {
       printf("%d  ",arr1[i]);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("%d  ",arr2[i]);
    }
    printf("\n");
    printf("======================\n");

    mix_merge(arr1,5,arr2,5);

    for(i=0;i<5;i++)
    {
       printf("%d  ",arr1[i]);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("%d  ",arr2[i]);
    }
    return 0;
}
/***********************************/
// merging arrays not equal size

#include <stdio.h>
#include <stdlib.h>

int merge_array (int *arr1,int s1,int *arr2,int s2,int *newarr)
{
    int j=0,i,flag=0;
    int size,rem=0;
    if(s1>s2)
    {
        rem=s1-s2;
        size=(s1+s2)-rem;
        flag=0;
    }
    else if(s2>s1)
    {
        rem=s2-s1;
        size=(s1+s2)-rem;
        flag=1;
    }
    else
    {
        size=s1+s2;
    }
    for(i=0; i<size; i=i+2)
    {
        newarr[i]=arr1[j];
        newarr[i+1]=arr2[j];
        j++;
    }
    for(i; i<size+rem; i++)
    {
        if(flag==0)
        {
            newarr[i]=arr1[j];
            j++;
        }
        else
        {
            newarr[i]=arr2[j];
            j++;
        }
    }
    return size+rem;
}

int main()
{
    int i,x,size;
    int arr1[15]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int arr2[10]= {10,20,30,40,50,60,70,80,90,100};
    int newarr[100];

    size=merge_array(arr1,15,arr2,10,newarr);
    for(i=0; i<size; i++)
    {
        printf("%d   ",newarr[i]);
    }

    return 0;
}
/*************************************/