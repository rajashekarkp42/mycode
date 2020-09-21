#include<stdio.h>
int rect(int x, int y)
{
	int rect;
	rect=x*y;
	return rect;
}
int main()
{
	int a,l,w;
	printf("enter the lenth\n");
	scanf("%d",&l);
	printf("enter the width\n");
	scanf("%d",&w);
	a=rect(l,w);
	printf("the area of rectangle is %d\n",a);
	
	return 0;
}
