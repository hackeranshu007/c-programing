#include <stdio.h>

int main() {
    int n;
    int num[n],num2[n];
    int a = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n; i++) {
        int same = 0;
        for (int j = 0; j < a; j++) {
            if (num[i] == num2[j]) {
                same = 1;
                break;
            }
        }
        if (!same) {
            num2[a] = num[i];
            a++;
        }
    }
    printf("Array after removing duplicates: ");
    for (int i = 0; i < a; i++) {
        printf("%d ", num2[i]);
    }

    return 0;
}