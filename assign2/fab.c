#include<stdio.h>
int sum(int a,int b)
{
	int sum;
	sum=(a+b);
	return sum;
}
int main()
{
	int i,a=0,b=1,c,n;
	printf("enter the numbers\n");
	scanf("%d",&n);
	printf("fibonacci series is \n");
	for(i=1;i<n;i++)
	{
	printf(" %d",a);
	c=sum(a,b);
	a=b;
	b=c;
	}
	return 0;
}

