#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    char arr[] = "LOVE";  ///
    char arr2[] = "LOVE";
    for (int i = 0; i < 4; i++)
    {
        printf("%c  %c  %d  %d\n",arr[i],arr2[i],&arr[i],&arr2[i]);
    }
    // printf("---------------------------------------\n");
    // char *ar = "LOVE";
    // char *ar2 = "LOVE";
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%c  %c  %d  %d\n",*(ar+i),*(ar2+i),(ar+i),(ar2+i));
    // }

    // printf("---------------------------------------\n");
    // char *a = "LOVE";
    // char *a2 = "LOVEKK";
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%c  %c  %d  %d\n",*(a+i),*(a2+i),(a+i),(a2+i));
    // }
    
    // printf("---------------------------------------\n");
    // char *r = malloc(sizeof(char)*5);  // ADDRESS 100
    //     r = "LOVE";   // Address 150
    // char *r2 = malloc(sizeof(char)*5); // 402
    //     r2 = "LOVE";  // address 150
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%c  %c  %d  %d\n",*(r+i),*(r2+i),(r+i),(r2+i));
    // }
    // free(r);
    // free(r2);
    
    return 0;
}

// strcpy(r, "LOVE");
// strcpy(r2, "LOVE");
// we can use this function to correct the above code



//  malloc == > location allocate ==> 100
// "love"  ==> 150