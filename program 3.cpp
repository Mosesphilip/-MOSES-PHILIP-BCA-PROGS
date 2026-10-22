#include <stdio.h>

int main()
{
    int a, b, t;

    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping a=%d, b=%d\n", a, b);

    t = a;
    a = b;
    b = t;

    printf("After swapping a=%d, b=%d\n", a, b);

    return 0;
}
