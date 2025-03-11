#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char f1[] = "hello";
    char f2[] = "bye";

    
    strncpy(f1, f2,sizeof(f2)-1);
    // f1[sizeof(f1) - 1] = '\0'; 
    printf("%s\n", f1);
    printf("-----------------------------\n");

//    int n ;
//    scanf("%d",&n);
//     for (int i = 0; i < strlen(f2)+1 && i < n; i++)
//     {
//         f1[i] = f2[i];
//     }
   
//     printf("%s\n", f1);

    return 0;
}
