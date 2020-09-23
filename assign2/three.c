#include<stdio.h>
int add( int a,int b)
{
	int add;
	add=a+b;
	return add;
}
int sub( int a, int b)
{
	int sub;
	sub=a-b;
	return sub;
}
int mul(int a,int b)
{
	int mul;
	mul=a*b;
	return mul;
}
int div( int a, int b)
{
	int div;
	div=a/b;
	return div;
}
	
int main()
{
	int a,b,c,d,e,f;
	printf("enter the value of a\n");
	scanf("%d",&a);
	printf("enter the value of b\n");
	scanf("%d",&b);
	c=add(a,b);
	d=sub(a,b);
	e=mul(a,b);
	f=div(a,b);
	printf("the c=%d d=%d e=%d f=%d",c,d,e,f);
	return 0;
}

