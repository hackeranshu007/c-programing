#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char *arr = malloc(5);
    strcpy(arr,"bye");
    char *arr2 = malloc(5);
    strcpy(arr2,"bye");
   
    for (int i = 0; i < 3; i++)
    {
        printf("%c  %c  %d  %d\n",arr[i],arr2[i],&arr[i],&arr2[i]);
    }
    free(arr);
    free(arr2);

    return 0;
}
