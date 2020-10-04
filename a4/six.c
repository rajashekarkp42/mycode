#include<stdio.h>
int fun(int a,int b)
{
	int or;
       or=a|b;
        return or;
}
int main()
{
	int a=50,b=10,c;
	c=fun(a,b);
	printf("the or of two variables is c=%x",c);
		return 0;
}

