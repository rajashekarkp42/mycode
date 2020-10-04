#include<stdio.h>
int fun(int a)
{
	int ans;
	ans=((~7 & 0x000f)==8);
	return ans;
}
int main()
{
	int a;
	a=fun(a);
	printf("the value ofa=%x",a);
	return 0;
}

