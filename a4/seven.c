#include<stdio.h>
int fun(int a)
{
	int comp;
	comp=(~a);
	return comp;
}

	int main()
{
	int a=4,b;
	b=fun(a);
	printf("%d\n",b);
	return 0;
}


