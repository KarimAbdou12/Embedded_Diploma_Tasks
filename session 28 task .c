#define LIMIT1(x,low,high) x>low?(x<high?x:high):low
#define LIMIT2(x,low,high) x>low?(x<high?(x=x):(x=high)):(x=low)


int main()
{
    int x=9;
	int y=LIMIT1(x,10,30);
	printf("%d  %d\n",x,y);
	LIMIT2(x,10,30);
	printf("%d\n",x);


    return 0;
}
/**********************/

#define MAX(x,y) (((x)>(y))?(x):(y))

#define limit(x,low,high) (((x)<(low))?((x)>(high))?(high):(x):(x))

#define read_bit(x,y) ((x>>y)&1)?1:0

#define set_bit(x,bit) x=x|(1<<bit)	

#define toggel_bit(x,bit)    x=x^(1<<bit)

#define comp(x)       x=(~x)	

/***************************/

