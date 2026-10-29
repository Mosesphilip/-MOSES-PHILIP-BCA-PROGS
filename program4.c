#include <stdio.h>
int main()
{
   float F,C;
   printf("enter fahrenheit value");
   scanf("%f",&F);
   C=(F-32.0)*(5.0/9.0);
   printf("celcius value=%f",C);
   return 0;
	
}
