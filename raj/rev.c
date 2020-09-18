#include<stdio.h>
int main()

{
	int a=4983;
	int b1,b2,b3,b4;
	b1=4;b2=9;b3=8;b4=3;

	
	b1=b1+b4;
	b4=b1-b4;
	b1=b1-b4;

        b2=b2+b3;
	b3=b2-b3;
	b2=b2-b3;

	printf("reversed number: %d,%d,%d, %d\n",b1,b2,b3,b4);

	return 0;
}

