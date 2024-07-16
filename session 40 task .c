
typedef union
{
    struct
    {
        unsigned char b1 : 1;
        unsigned char b2 : 1;
        unsigned char b3 : 1;
        unsigned char b4 : 1;
        unsigned char b5 : 1;
        unsigned char b6 : 1;
        unsigned char b7 : 1;
        unsigned char b8 : 1;

    }
} bf_t;

char arr[10];

int get_defect (char numofarr,char led)
{
    switch (led)
    {
    case 1:
        return ((bf_t *)&arr[numofarr])->b1 ;
        break;
    case 2:
        return ((bf_t *)&arr[numofarr])->b2 ;
        break;
    case 3:
        return ((bf_t *)&arr[numofarr])->b3 ;
        break;
    case 4:
        return ((bf_t *)&arr[numofarr])->b4 ;
        break;
    case 5:
        return ((bf_t *)&arr[numofarr])->b5 ;
        break;
    case 6:
        return ((bf_t *)&arr[numofarr])->b6 ;
        break;
    case 7:
        return ((bf_t *)&arr[numofarr])->b7 ;
        break;
    case 8:
        return ((bf_t *)&arr[numofarr])->b8 ;
        break;
    }
}

/*************/
//main

 arr[2]=3;
 printf("%d \n",get_defect(2,2));
 
 
 
 /********************/