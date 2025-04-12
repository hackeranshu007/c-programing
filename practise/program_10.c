#include <stdio.h>
int main()
{
    int upper = 0, lower = 0;
    char ch[100];
    scanf(" %s", ch);
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            lower++;
        }
    }
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            upper++;
        }
    }

    printf("Uppercase Letters : %d\n", upper);
    printf("Lowercase Letters : %d", lower);
}