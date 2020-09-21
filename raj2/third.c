#include<stdio.h>
int sub(int x,int y)
{
	int diff;
	diff=(x-y);
	return diff;
}
int main()

{
	int a,b,c;
	printf("enter the first number\n");
	scanf("%d",&a);
	printf("enter the second number\n");
	scanf("%d",&b);
	c=sub(a,b);
	printf("the difference is a=%d and b=%d is %d\n",a,b,c);
	return 0;
}


