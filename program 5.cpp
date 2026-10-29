
#include <stdio.h>

int main()
{
    int N, i, j, f;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Prime numbers between 1 and %d:\n", N);

    for (i = 2; i <= N; i++)
    {
        f = 1;

        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                f = 0;
                break;
            }
        }

        if (f == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
