
#include <stdio.h>

int main()
{
    int i, t, r, s, d, p, j;

    printf("Armstrong numbers between 1 and 1000:\n");

    for (i = 1; i <= 1000; i++)
    {
        t = i;
        d = 0;
        s = 0;

        while (t > 0)
        {
            d++;
            t = t / 10;
        }

        t = i;

        while (t > 0)
        {
            r = t % 10;
            p = 1;

            for (j = 0; j < d; j++)
            {
                p = p * r;
            }

            s = s + p;
            t = t / 10;
        }

        if (s == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
