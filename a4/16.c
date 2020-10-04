#include<stdio.h>
int fun(int z)
{
	int y;
	y=(y&&(y|=10));
	return y;
}
int main()
{
	int z;
	z=fun(z);
	printf("the value of z=%x\n",z);
	return 0;
}

