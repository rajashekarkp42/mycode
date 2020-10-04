#include<stdio.h>
int fun(int i)
{
	int ans;
	ans=++i + ++i + ++i;
	return ans;
}
int main()
{
	int i=5;
	i=fun(i);
	printf("the value of i=%d \n",i);
	return 0;
}


