// #include<stdio.h>
// int main (){
//     int i, a[4] = {3, 1, 2, 4}, result;
//     result = a[0];
//     for (i = 1; i < 4; i++)
//     {
//         if (result > a[i])
//             continue;
//         result = a[i];
//     }
//     printf("%d", result);
//     return 0;
// }

// #include <stdio.h>
// int main(){
// int arr[]= {1,2,3,4,5,6};
// int i,j,k;
// j=++arr[2];
// k=arr[1]++;
// i=arr[j++];
// printf("i=%d, j=%d, k=%d", i,j, k);
// return 0;
// }

// #include<stdio.h>
// int main (){
// int n = 2;
// int sum = 5;
// switch (n)
// {
// case 2: sum = sum-3;
// case 3: sum*=4;
// break;
// default:
// sum = 0;
// }
// printf("%d", sum);
// return 0;
// }

#include<stdio.h>
int main(){
int a;
int arr[5] = {1, 2, 3, 4, 5};
arr[1] = ++arr[1];
a = arr[1]++;
arr[1] = arr[a++];
printf("%d, %d", a, arr[1]);
return 0;
}