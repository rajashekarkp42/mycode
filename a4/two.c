#include<stdio.h>
int rshift(int a)
{
	int right;
	right=a>>2;
	return right;
}
int main()
{
	int a=0X45fe6a92;
	a=rshift(a);
	printf("the value of a=%x",a);
	return 0;
}

