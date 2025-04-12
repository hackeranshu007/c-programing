#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int i = num;
    int val = i;
    while (i > 0)
    {
        i--;
        if (i==0)
        {
            break;
        }
        
        val *= i;
    }
    printf("%d \n", val);

    return 0;
}