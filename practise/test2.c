// <-- leapyear question -->

#include <stdio.h>

int main()
{
    int year;
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("The year you entered is a leap year %d ", year);
    }
    else
    {
        printf("The year you entered is not a leap year %d ", year);
    }

    return 0;
}