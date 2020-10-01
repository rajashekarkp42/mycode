#include<stdio.h>
#define cold 1
#define hot 2
#define rain 3
int main()
{
	int season;
	printf("enter the value\n");
	scanf("%d",&season);
if(season==cold)
{
	printf("spring\n");
}
else if(season==hot)
{
	printf("summer\n");
}else if(season==rain)
{
	printf("rainy\n");
}
return 0;
}

