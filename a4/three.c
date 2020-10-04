#include<stdio.h>
int lshift(int a)
{
	int left;
        left=a<<4;
	return left;
}

int main()
{
  int a=0xA;
  a=lshift(a);
  printf("the value of left shift variable is a=%x",a);
  return 0;
}

