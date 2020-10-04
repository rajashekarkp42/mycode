#include<stdio.h>
int fun(int a,int b,int c)
{
	int ans;
	ans=(c=a==b);
	return ans;
}
int main()
{
	int a=2,b=7,c=10;
         c=fun(a,b,c);
	printf("c=%d",c);
	return 0;
}

