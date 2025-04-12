#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the the value of side of triangle");
    scanf("%d%d%d", &a, &b, &c);
    if (a == 0 || b == 0 || c == 0)
    {
        printf("Triangle is not form");
    }
    else if (a == b == c)
    {
        printf("Triangle is equilateral");
    }
    else if ((a == b) || (a == c) || (b == c))
    {
        printf("triangle is isoleses");
    }
    else if (a * a + b * b == c * c)
    {
        printf("Triangle is right angle");
    }
    else
    {
        printf("Triangle is scalen");
    }
    return 0;
}