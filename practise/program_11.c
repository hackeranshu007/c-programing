#include <stdio.h>
int main()
{
    int matrix[20][20];
    int i, j, r, c;
    int sum;

    scanf("%d", &r); // Accepts number of rows
    scanf("%d", &c); // Accepts number of columns

    for (i = 0; i < r; i++) // Accepts the matrix elements from the test case data
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum += matrix[i][j];
        }
        if (i < r - 1)
        {
            printf("%d\n", sum);
        }
        else
        {
            printf("%d", sum);
        }
    }

    printf("%d\n", sum);
}