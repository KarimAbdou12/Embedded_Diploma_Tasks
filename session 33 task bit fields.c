
// bit fields


struct bit_field
{
    unsigned int a : 1; // 0 to 1
    unsigned int b : 1; // 0 to 1
    unsigned int c : 2; // 0 to 2
    unsigned int d : 1; // 0 to 1
    unsigned int e : 3; // 0 to 7
    
}x;


int main()
{

	x.a=1;
	x.b=0;
	x.c=0b10;
	x.d=0x0;
	x.e=7;

return 0;
}

