#include <stdio.h>

int main()
{
    int n, revno = 0, rm, orno;

    printf("Enter the number: ");
    scanf("%d", &n);
    orno=n;

    while(n != 0)
    {
        rm = n % 10;
        revno = revno * 10 + rm;
        n = n / 10;
    }
    if(orno==revno)
    {
	printf("the no: %d is a palindrome no." , orno );
}
else
{
   printf("the no: %d is not a palindrome no." , orno);
}
return 0;
}
