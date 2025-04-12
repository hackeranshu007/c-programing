#include <stdio.h>

int main()
{

    char a;
    scanf("%c", &a);
    if (a >= 97 && a <= 122)
    {
        printf("the character is lower case %c and the ascii value is %d", a);
    }
    else if (a >= 33 || a <= 47)
    {
        printf("the character is spectial character %c and the ascii value is %d", a);
    }

    else
    {
        printf("the character is upper case %c and the ascii value is %d", a);
    }

    return 0;
}