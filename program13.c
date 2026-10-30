
#include <stdio.h>

int main()
{
    int n, t1 = 0, t2 = 1, t3, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series:\n");

    for (i = 1; i <= n; i++)
    {
        printf("%d\n", t1);
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }

    return 0;
}
