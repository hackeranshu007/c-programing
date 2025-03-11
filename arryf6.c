#include <stdio.h>
#include <string.h>

int main() {
    char dest[50] = "Hello, "; // Ensure enough space for concatenation
    char src[] = "World!";

    // Concatenate src to dest
    strcat(dest, src);

    printf("Concatenated String: %s\n", dest);

    return 0;
}
