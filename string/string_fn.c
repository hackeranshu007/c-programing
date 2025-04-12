#include <stdio.h>
#include <string.h>
int Compare();
int main()  // strcmp --> string co.
{
    char f1[] = "aaa"; // a - b = -1
    char f2[] = "abc"; // b - a = 98-97 =1
    // if (strcmp(f1, f2) != 0)
    // {
    //     printf("%d\n",strcmp(f1, f2));
    //     printf("NOT EQUAL");
    // }
    printf("---------");
    int x = Compare();
    printf("\n%d", x);
    // printf("\n%d",''-'b');

    if (Compare() != 0)
    {
        printf("\nNOT EQUAL");
    }

    return 0;
}

int Compare()
{
    char f1[] = "aaa";
    char f2[] = "aba";

    for (int i = 0; f1[i] != '\0' && f2[i] != '\0'; i++)
    {
        if (f1[i] > f2[i])   
        {
            return (f1[i] - f2[i]);
            continue;
        }
        else if (f1[i] < f2[i])
        {
            return (f2[i] - f1[i]);
        }
    }
    return 0;
}

//  strcmp 
//  pointer function + /-