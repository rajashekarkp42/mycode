#include<stdio.h>
int rshift(int a)
{
	int right;
	right=a>>4;
	return right;
}
int main()
{
	int a=0xa00;
	a=rshift(a);
	printf("the value of  right shift variable a=%d",a);
	return 0;
}

