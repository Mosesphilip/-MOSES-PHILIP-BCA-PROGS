
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any character: ");
    scanf(" %c", &ch);

    if ((ch >= 'a' && ch <= 'z') ||
        (ch >= 'A' && ch <= 'Z'))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U')
        {
            printf("it is a vowel",ch);
        }
        else
        {
            printf("it is a consonant"),ch;
        }
    }
    else
    {
        printf("it is not an alphabet",ch);
    }

    return 0;
}

