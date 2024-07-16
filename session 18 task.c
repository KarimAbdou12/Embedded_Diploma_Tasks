// new file 

int temp;
int max_temp;
int min_temp;

void take_temp (int num)
{
    temp=num;
    static int flag=0;
    if(flag==0)
    {
        max_temp=temp;
        flag=1;
    }
    if(flag==1)
    {
        min_temp=temp;
        flag=2;
    }
    if(temp>max_temp)
    {
        max_temp=temp;
    }
    else if(temp<min_temp)
    {
        min_temp=temp;
    }
}


int get_max (void)
{
    return max_temp;
}

int get_min (void)
{
    return min_temp;
}

/*****************/
//calling functions in main

extern int max_temp;
extern int min_temp; 
 while(1)
    {
        int temp;
        scanf("%d",&temp);
        take_temp(temp);
       printf("max = %d   min = %d  \n",max_temp,min_temp);
    }
	
/*************