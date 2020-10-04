#include<stdio.h>
int fun(int a)
{
	int ans;
	ans=((a++)+(~++a));
        return ans;
}
int main()
{
	int a=2;
        a=fun(a);
	printf(" the value of  a=%d \n",a);
	return 0;
}

