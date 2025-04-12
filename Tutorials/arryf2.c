#include <stdio.h>
#include <string.h>
// strcpy
int main(int argc, char const *argv[])
{
    char f1[]= "hello";
    char f2[]= "bye";
    strcpy(f1,f2); // strcpy(desitation , source);
    printf("%s\n",f1);
    printf("-----------------------------\n");

    // for (int i = 0; i < strlen(f2); i++)//for (int i = 0; f2[i]=='\n'; i++)
    // {
    //     f1[i]=f2[i];
    // }
    // printf("%s\n",f1);
    
    return 0;
}
