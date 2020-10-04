#include<stdio.h>
float fun(int a,int i)
{
	int ans;
	ans=(a/2+a*4/a-a+i/3);
	return ans;
}
int main()
{
	float i=2.5,a=2,g;
	g=fun(a,i);
	printf("the value of g=%0.4f",g);
	return 0;
}

	
