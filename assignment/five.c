#include<stdio.h>
int sub(int a,int b)
{
	int diff;
	diff=a-b;
	return diff;
}
int main()
{
	int a,b,diff;
	printf("enter the value of a and b\n");
	scanf("%d %d",&a,&b);
	diff=sub(a,b);
	printf("the difference of two numbers is :%d\n",diff);
return 0;
}


