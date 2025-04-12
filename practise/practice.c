#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the vlue of x =  ");
    scanf("%d", &x);
    printf("Enter the vlue of y =  ");
    scanf("%d", &y);

    x = x + y;
    y = x - y;
    x = x - y;
    printf("swap number of x is %d and y is %d", x, y);
    return 0;
}