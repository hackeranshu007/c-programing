#include <stdio.h>
#include <string.h>
int Compare();
int main()
{
    char f1[] = "hello";
    char f2[] = "bye";
    if (strcmp(f1, f2) != 0)
    {
        printf("NOT EQUAL");
    }
    int x = Compare();
    printf("\n%d", x);
    // printf("\n%d",'h'-'b');

    if (Compare() != 0)
    {
        printf("\nNOT EQUAL");
    }

    return 0;
}

int Compare()
{
    char f1[] = "hello";
    char f2[] = "bye";

    for (int i = 0; f1[i] != '\0' && f2[i] != '\0'; i++)
    {
        if (f1[i] > f2[i])
        {
            return (f1[i] - f2[i]);
            break;
        }
        else if (f1[i] < f2[2])
        {
            return (f2[i] - f1[i]);
        }
    }
    return 0;
}