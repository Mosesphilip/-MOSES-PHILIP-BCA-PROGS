# include <stdio.h>

int main()
{
	int n, rem, bin=0 , i=1;
	printf("enter a decimal number : ");
	scanf ("%d",&n);

	while (n > 0)
	{
		rem=n%2;
		bin=bin+rem*i;
		n=n / 2 ;
		i=i*10;
	}
		printf("binary number: %d",bin);
		return 0;
	
}
