#include<stdio.h>
extern int fun(void);
extern  int a,b,c,d;
int main()
{
	d=fun();
	printf("sum of numbers  and a=%d b=%d  c=%d is d=%d\n",a,b,c,d);
	return 0;
}

