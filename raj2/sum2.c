#include<stdio.h>
int sum(int a,int b, int c, int d)
{
	int sum;
       sum=(a+b+c+d);
       return sum;
}       
int main()
{
	int a,b,c,d,s;
	printf("enter the first value\n");
	scanf("%d",&a);
	printf("enter the second value\n");
	scanf("%d",&b);
	printf("enter the third value\n");
	scanf("%d",&c);
	printf("enter the fourth value\n");
	scanf("%d",&d);
	s=sum(a,b,c,d);
	printf("sum of all digits a=%d b=%d c=%d d=%d is  %d\n",a,b,c,d,s);
	return 0;
}


