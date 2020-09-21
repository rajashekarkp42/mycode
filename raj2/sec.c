#include<stdio.h>
int add(int x,int y)
{
int sum;
sum=(x+y);
return sum;
}
int main ()
{
	int a,b,c;
        printf("enter the first number\n");
	scanf("%d",&a);
	printf("enter the second number\n");
	scanf("%d", &b);
	
	 c=add(a,b);
	printf("the sum of a= %d and  b=%d is %d\n",a,b,c);
	return 0;
}

