   # include <stdio.h>

int main()
{
	int n, rem, dec=0 , i=1;
	printf("enter a binary number : ");
	scanf ("%d",&n);

	while (n > 0)
	{
		rem=n%10;
		dec=dec+rem*i;
		n=n / 10 ;
		i=i*2;
	}
		printf("decimal number: %d",dec);
		return 0;
	
}
