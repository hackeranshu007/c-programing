#include<stdio.h>

int main(){
    int n;
    int array[n];
    printf("Enter the number of elements in the array");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    
    int i,j,k;
    // Removing duplicates
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                if (array[i] == array[j]) {
                    // Shift elements to the left
                    for (k = j; k < n - 1; k++) {
                        array[k] = array[k + 1];
                    }
                    n--; // Reduce array size
                    j--; // Check the new element at the same index
                }
            }
        }
        for (int k = 0; k < (n-1); k++)
    {
        printf("%d", array[k]);
    }
    
        // Print the array after removing duplicates    
        return 0;

}