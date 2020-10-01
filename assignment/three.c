#include<stdio.h>
 static int sum;
int fun()
{
	sum=sum+1;
	return sum;
}
int main()
{

	int c;
	c=fun();
	c=fun();
	c=fun();
	printf("value of c=%d\n",c);
	return 0;
}

