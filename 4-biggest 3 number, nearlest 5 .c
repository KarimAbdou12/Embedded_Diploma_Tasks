  if(x>y)
    {
        if (x>z)
        {
            printf("%d is the biggest number\n",x);
        }
        else
        {
            printf("%d is the biggest number\n",z);
        }
    }
    else
    {
        if (y>z)
        {
            printf("%d is the biggest number\n",y);
        }
        else
        {
            printf("%d is the biggest number\n",z);
        }
    }
	
/**********************************************************************************/
int x=0,z=0,y=0,k;
    printf("please enter three numbers\n");
    scanf("%d%d%d",&x,&y,&z);
    if((x>=y)&&(x>=z)&&)
    {
         printf("%d is the xbiggest number\n",x);
    }
    else if (y>=x&&y>=z)
    {
         printf("%d is the ybiggest number\n",y);
    }
    else if (z>=y&&z>=x)
    {
         printf("%d is the zbiggest number\n",z);
    }	
	
/********************************************************************/
int x=0,z=0,y=0,k,max=0,index=1;
    printf("please enter three numbers\n");
    scanf("%d%d%d%d",&x,&y,&z,&k);

    max=x;

    if(y>=max)
    {
        max=y;
        index=2;
    }
    if(z>=max)
    {
        max=z;
        index=3;
    }
    if(k>=max)
    {
        max=k;
        index=4;
    }
printf("the %dth is max=%d\n",index,max);


/********************************************************************/


   if(x%2)
    {
        printf("odd\n");
    }
    else
    {
        printf("even\n");
        
    }	
	
	
	
	int x=0,z=0,y=0,k,max=0,index=1,num,rem;
    printf("please enter your grade\n");
    scanf("%d",&num);
    
    rem=num%5;
    if(rem==0)
    {
        printf("%d",num);
    }
    else if(rem==1)
    {
        printf("%d",num-1);
    }
    else if(rem==2)
    {
        printf("%d",num-2);
    }
    else if(rem==3)
    {
        printf("%d",num+2);
    }
    else if(rem==4)
    {
        printf("%d",num+1);
    }
	
	
	
	
	
	int x=0,z=0,y=0,k,max=0,index=1,num,rem;
    printf("please enter your grade\n");
    scanf("%d",&num);
    
    rem=num%5;
    if(rem<=2)
    {
        printf("%d",num-rem);
    }    
    else 
    {
        printf("%d",num-rem+5);
    }
	
	
	int x=0,z=0,y=0,k,max=0,index=1,num,rem;
    printf("please enter your grade\n");
    scanf("%d",&num);
    
    num=((num+2)/5)*5;
   
        printf("%d",num);