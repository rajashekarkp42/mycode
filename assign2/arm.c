#include<stdio.h>
int k(int n)
{
	int k;
	k=(n%10);
	return k;
}
int l(int sum,int rem)
{
	int l;
	l=sum+(rem*rem*rem);
	return l;
}
int m(int n)
{
	int m;
	m=n/10;
	return m;
}

int main()
{
	int n,i,sum=0,rem;
	printf("enter the number\n");
	scanf("%d",&n);
	i=n;
	while(n!=0)
	{
	       rem=k(n);
		sum=l(sum,rem);
		n=n/10;
	}


if(i==sum)
{
	printf("\n%d is armstrong number\n",sum);
}else{
	printf("\n%d is not arm strong number\n",sum);
			}
			return 0;
			}



