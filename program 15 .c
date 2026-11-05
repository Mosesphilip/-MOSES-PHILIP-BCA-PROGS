#include <stdio.h>

int main()
{
    int n, revno = 0, rm;

printf("Enter the number: ");
scanf("%d", &n);
while(n != 0)
{
   rm = n % 10;
revno = revno * 10 + rm;
 n = n / 10;
}
printf("Reversed number = %d", revno);
return 0;
}