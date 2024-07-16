
#define timer (*(volatile char * volatile)6487568)

int main()
{
    int x=10,y=30;
     volatile int * p=&x;
     timer =10;

    *p=20;
    p=&y;
    printf("%d\n",p);
    printf("%d",timer);




    return 0;
}
/******************************/
 
 volatile const int * p=&x;  //only hard ware can change this pointer
 
 *p=20; // compiler error 
 
 p=&y; //true 
 
/*****************************/
 
    int x=10,y=30;
    volatile  int *const p=&x; // cpu and hard ware can change this pointer
    timer =10;

    *p=20; // true
    p=&y; // compiler error
	
/**************************/

volatile const int x=10;
   printf("%d \n",x);
   
   int *p=&x; //true
   *p=30;

   printf("%d\n",*p);
   
/***************************/

volatile const int x=10; // hard ware can change this pointer

   printf("%d \n",x);
   const int *p=&x; // cpu and hard ware can change this pointer
   *p=30; // error

   printf("%d\n",*p);

/******************************/
 
 volatile const int x=10;

    printf("%d \n",x);
    volatile const int * p=&x; // only hard ware can change this pointer
    *p=30;// error

    printf("%d\n",*p);
	
/*****************************/
 