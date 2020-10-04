#include<stdio.h>
int fun(int a,int b)
{
	int and;
       and=a&b;
       return and;
}
int main()
{
	int a=50,b=10,c;
	c=fun(a,b);
	printf("the and of two numbers is c=%d",c);
	return 0;
}

