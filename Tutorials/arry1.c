#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int *p = malloc(sizeof(int)*6);

// p = addresss
    
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d\n",i+1);
        scanf("%d",p+i);
    }
    
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n",(p+i));
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n",*(p+i));
    }
    free(p);
    
    return 0;
}

// This memory is not automatically released when your program ends or when the pointer goes out of scope. If you don't explicitly free it using free(p);, that memory remains allocated and unavailable for other processes, leading to a memory leak.

// In short, calling free is like cleaning up after yourself—ensuring your program doesn’t unnecessarily hold onto resources it no longer needs