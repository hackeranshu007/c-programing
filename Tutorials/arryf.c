#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char f[] = "Hello";
    // int x = strlen(f);//  by using function 
    // printf("%d\n",x );
    printf("---------------------------------------\n");
    int i ;
    for (i= 0; f[i] !='\0'; i++)
        ;
    printf("%d\n",i);
    

    return 0;
}
