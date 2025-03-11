#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char f1[] = "HELLO";
    printf("Original: %s\n",f1);
    strlwr(f1);
    printf("Lowercase: %s\n",f1);
    printf("--------------------\n");

    char f2[] = "ABCDEFGHIJKLMNOPQRTVWXYZ";
    printf("Original: %s\n",f2);
    for (int i = 0; i < sizeof(f2)-1; i++)
    {
        f2[i]= f2[i] + 'a'-'A';
    }
    printf("Lowercase: %s\n",f2);





    return 0;
}
