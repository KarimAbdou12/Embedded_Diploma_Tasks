#pragma pack(1)

typedef struct {

short s1;
char c1;
int i1;

}s_t;  // (should be 8)


int main()
{
  printf("%d\n",sizeof(s_t));// 7

    return 0;
}
/***************/
#pragma pack(2)

typedef struct {
char c2;
long long l1;
char c1;
int i1;

}s_t;


int main()
{
  printf("%d\n",sizeof(s_t));// shoud be 24 but it will be 16

    return 0;
}

/************************/

//__attribute__((packed)) == #pragma pack(1)

struct s_t{
char c2;
long long l1;

int i1;

}__attribute__((packed));

    struct s_t s1;
int main()
{

  printf("%d\n",sizeof(s1));

    return 0;
}

/************************************/

#pragma pack( push,1)
struct st 
{
    char c;
    double d;
    short e;
}var1;

struct second {
char c1;
int i1;
char c2;
short s1;
}var2;

#pragma pack(pop) // disables the effect of #pragma pack from now on


struct s_t
{
    char c2;
    long long l1;

    int i1;

}__attribute__((packed,aligned(2)));// should be 24 but it will be 14


struct s_t2
{
    char c2; __attribute ((packed,aligned(1)))
    long long l1; __attribute ((packed,aligned(1)))

    int i1; __attribute ((packed,aligned(1)))

}s2; //should be 24 but it will be 13


int main()
{
    printf("var1=%d\t\tvar2=%d\n ",sizeof(var1),sizeof(var2));
    struct s_t s1;
    printf("s1=%d\t\ts2=%d\n",sizeof(s1),sizeof(s2));

    return 0;
}
/***********************/


struct s_t
{
    char c2;
    long long l1;

    int i1;

}__attribute__ ((packed,aligned(1))) s1 ;//another syntix