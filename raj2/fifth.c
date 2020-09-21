#include<stdio.h>
int div(int x, int y)
{
	int div;
	div=x/y;
	return div;
}

int main()
{
	int a,b,c;
	printf("enter the first number\n");
	scanf("%d",&a);
	printf("enter the second number\n");
	scanf("%d",&b);
	c=div(a,b);
	printf("the quotient is a=%d and b=%d is %d\n",a,b,c);
	return 0;
}

