#include <stdio.h>
int main()
{
	float f,p,r,t,i;
	printf("enter principle amount");
	scanf("%f",&p);
	printf("enter rate of interest");
	scanf("%f",&r);
	printf("enter time period");
	scanf("%f",&t);
	i=(p*r*t)/100;
	printf("simple interest");
	return 0;
}

