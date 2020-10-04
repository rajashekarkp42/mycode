#include<stdio.h>
int fun(int a,int g)
{
	int ans;
	ans=(1/3*a/4-6/2+2/3*6/g);
	return ans;
}
int main()
{
	int a=4,g=3,s;
	s=fun(a,g);
	printf("the value of s=%d\n",s);
	return 0;
}

