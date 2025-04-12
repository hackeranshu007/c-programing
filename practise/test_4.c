#include <stdio.h>

int main()
{
    int n , a;
    int num[n], num2[n];
    printf("Enter the number of elements in the array");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n; i++)
    {
            int same = 0;
           
        for (int j = 0; j < a; j++)
        {
            if (num[i] == num2[j])
            {
                int same = 1;
                break;
            }
        }
        if (!same)
        {
            num2[a] = num[i];
            a++;
        }
        
    }

    for (int k = 0; k < a; k++)
    {
        printf("%d", num[k]);
    }

    return 0;
}