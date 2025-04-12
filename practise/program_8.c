#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int a = 1; 

    while (a< num) {
        a *= 2;  
    }

    if (a == num) {
        printf("%d can be expressed as a power of 2.\n", num);
    } else {
        printf("%d cannot be expressed as a power of 2.\n", num);
    }

    return 0;
}