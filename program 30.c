
#include <stdio.h>
#include <string.h>

void reverse(char str[], int len)
{
    if (len == 0)
        return;

    printf("%c", str[len - 1]);
    reverse(str, len - 1);
}

int main()
{
    char str[100];
    int len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    printf("Reversed string: ");
    reverse(str, len);

    return 0;
}
