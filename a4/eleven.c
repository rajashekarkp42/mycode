#include<stdio.h>
float fun(int q, int a, int g)
{
	float ans;
	ans=(q*a/4-6/2+(2/3)*(6/g));
	return ans;
}
int main()
{
	float  q=4,a=2,s,g=2;
	s=fun(q,a,g);
	printf("the value of s=%0.4f",s);
	return 0;
}

