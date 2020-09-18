#include<stdio.h>
int main()
{
	int a,b;
	a=4;b=5;
	printf(" the entered numbers are %d and %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the swapping of two numbers: %d and %d\n",a,b);
	return 0;
}

