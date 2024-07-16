int is_symmetric(int (*matrix)[4],int c,int r)
{
    int row=0,col=0,i;
    int sum1=0,sum2=0;
    if(r==c)
    {
        for(i=0; i<r; i++)
        {
            sum1=sum1+matrix[col][row];
            row++;
            col++;
        }
        row=0;
        col--;
        for(i=0; i<r; i++)
        {

            sum2=sum2+matrix[col][row];
            row++;
            col--;
        }
        printf("%d  %d\n",sum1,sum2);

    }
    else
    {
        return -1;
    }

    if(sum1==sum2)
    {
        return 1;
    }
    else
    {
        return -1;
    }


}

int main()
{
    int matrix[4][4]= {  {1,2,3,4},{5,6,2,8},{9,10,11,12},{13,14,15,16}  };


   int x= is_symmetric(matrix,4,4);
   if(1==x)
   {
       printf("symmetric\n");
   }
   else
   {
       printf("not symmetric\n");
   }

    return 0;
}
/***********************************************/

void martix_print_zegzag (int (*matrix)[5],int r,int c)
{
    int row=0,col=0;
    int flag=0;
    while(row<r)
    {
        if(row%2==0)
        {
            if(flag==1)
            {
                col++;
            }
            for(; col<c; col++)
            {
                printf("%d  ",matrix[row][col]);
            }
        }
        else
        {
            for(col=col-1; col>=0; col--)
            {
                printf("%d  ",matrix[row][col]);
            }
            flag=1;
        }
        row++;
    }
}


int main()
{
    int matrix[3][5]= {  {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };

    martix_print_zegzag(matrix,3,5);
    

    return 0;
}
/*****************************************/