/*PRIME OR NOT*/
#include <stdio.h>
int main()
{
	int n,i,count=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++);
	{
		if(n%i==0)
		{count ++;
		}
	}
	if(count==0)
	{
		printf("%d is a prime number.\n",n);
	}
	else
	{
		printf("%d is not a prime number.\n",n);
	}
	return 0;
}
