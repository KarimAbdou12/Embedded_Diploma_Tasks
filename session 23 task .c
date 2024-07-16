void ATM (int num)
{
   while(num>=200)
   {
       printf("%d  ",200);
       num-=200;
   }
   while(num>=100)
   {
       printf("%d  ",100);
       num-=100;
   }
   while(num>=50)
   {
       printf("%d  ",50);
       num-=50;
   }
   while(num>=20)
   {
       printf("%d  ",20);
       num-=20;
   }
    while(num>=10)
   {
       printf("%d  ",10);
       num-=10;
   }
   while(num>=5)
   {
       printf("%d  ",5);
       num-=5;
   }
   while(num>=1)
   {
       printf("%d  ",1);
       num-=1;
   }

}

int main()
{
    ATM(556);

    return 0;
}

/*****************************************/
const int notes[7]= {200,100,50,20,10,5,1};
int arr[7];


void ATM(int n)
{
    int i;
    for(i=0; i<7; i++)
    {
        arr[i]=n/notes[i];
        n=n%notes[i];
    }
}

void ATM_PRINT(void)
{
    int i;
    for(i=0; i<7; i++)
    {
        printf("%d-> %d\n",notes[i],arr[i]);
    }
}
/***************************************/