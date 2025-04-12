#include <stdio.h>

int main()
{
    int n;
    int array[n];
    printf("Enter the number of elements in the array");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int l, m, j;
    for (int i = 0; i < n; i++)
    {
        for (l = i + 1; j < n; j++)
        {
            if (array[i] == array[l])
            {
                for (m = l; m < n - 1; m++)
                {
                    array[m] = array[m + 1];
                }
                n--;
                l--;
            }
        }
    }
    return 0;
}

int l, m;
for (i = 0; i < size; i++)
{
    for (l = i + 1; j < size; j++)
    {
        if (array[i] == array[l])
        {
            for (m = l; m < size - 1; m++)
            {
                array[m] = array[m + 1];
            }
            size--;
            l--;
        }
    }
}