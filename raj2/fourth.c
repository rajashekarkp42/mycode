#include<stdio.h>
int product( int x, int y)
{
	int product;
	product=x*y;
	return product;
}
int main()
{
	int a,b,c;
	printf("enter the first number\n");
       scanf("%d",&a);
        printf("enter the second number\n");
        scanf("%d",&b);	
	c=product(a,b);
	printf("the product ofa=%d and b=%d is %d\n",a,b,c);
	return 0;
}
