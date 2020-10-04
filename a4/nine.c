#include<stdio.h>
int fun(int i,int a,int t)
{
	int ans;
	ans=(i*a/2+3/2*a+2+t);
	return ans;
}

int main()
{
	int i=4,a=1,t=3,o;
	o=fun(i,a,t);
	printf("the value of o is=%d",o);
	return 0;
}

