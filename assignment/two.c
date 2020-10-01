#include<stdio.h>
#define PI 3.14
#define AREA(r)  PI*r*r
#define PERIMETER(r) 2*PI*r
#define VOLUME(r,h) PI*r*r*h
int main()
{
	int p,v,r=6,ans,h=5;
	ans=AREA(r);
	p=PERIMETER(r);
	v=VOLUME(r,h);
	printf("area=%d  and perimerter=%d  and volume=%d \n",ans,p,v);
	return 0;
}



