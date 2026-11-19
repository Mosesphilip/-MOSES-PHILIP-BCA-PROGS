
#include <stdio.h>

int main()
{
    int row1, col1, row2, col2;
    int i, j, isEqual = 1;

    printf("Enter rows and columns for 1st matrix: ");
    scanf("%d %d", &row1, &col1);

    printf("Enter rows and columns for 2nd matrix: ");
    scanf("%d %d", &row2, &col2);

    if (row1 != row2 || col1 != col2)
    {
        printf("Matrix add not possible ");
        return 0;
    }

    int m1[row1][col1], m2[row2][col2],c[50][50];

    printf("Enter the elements of 1st matrix:\n");

    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter the elements of 2nd matrix:\n");

    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }

    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
           c[i][j]= m1[i][j]+m2[i][j];
        }
    }

     printf(" sum of two matrices:\n");

    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("%d  ", c[i][j]);
        }
        printf ("\n");
    }
    
    return 0;
}