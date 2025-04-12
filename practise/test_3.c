#include<stdio.h>

int main(){
    int n;
   int num[n];
   printf("Enter the number of elements in the array") ;        
   scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }
       int largest = num[0];
    for (int i = 1; i < n; i++)
    {
       if (num[i]>largest)
       {
        largest = num[i];
       }
       
    }
    printf("%d",largest);
    

    return 0;

}