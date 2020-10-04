#include<stdio.h>
int fun(int num)
{
	int comp;
	comp=(num & 1);
	return comp;
}

int main()
{
	int num,and;
	printf("enter the value\n");
	scanf("%d",&num);
	and=fun(num);
	if(and==1)
	{
		printf("the given number is odd num=%d",num);
	}
	else{
		printf("the given number is even");
	}
}


