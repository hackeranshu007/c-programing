#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter five digit number");
    scanf("%d", &num);
    if (num > 100000 || num < 10000)
    {
        printf("reEnter the number");
    }
    else
    {
        while (num > 0)
        {
            int digit = num % 10;
            sum = sum + digit;
            num = num / 10;
        }
        printf("sum is %d ", sum);
    }

    return 0;
}