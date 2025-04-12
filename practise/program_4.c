#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int i = 0;
    int val;
    while (i <= num)
    {
        if (i%2==0)
        {
            val += i;
        }
        i++;
    }
    printf("%d \n", val);

    return 0;
}