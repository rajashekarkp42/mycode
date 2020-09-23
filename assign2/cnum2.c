#include<stdio.h>
int num(int a)
{
	int num;
	num=(a>0);
	return num;
}
int k(int a)
{
	int k;
	k=(a==0);
	return k;
}
int main()
{
	int a;
	printf("enter the number\n");
	scanf("%d",&a);
	if(num(a))
	{
		printf("the number is positive \n");
	}else if(k(a))
	{
		printf("the number is zero\n");
	}else{
		printf("the number is negative\n");
	}
	return 0;
}

