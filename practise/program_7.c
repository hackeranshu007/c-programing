#include<stdio.h>
int main(){
    int num;
    printf("enter the height of priymid");
    scanf("%d",&num);
    int i,j;
    for ( i = num; i>0;i--){
           for ( j = 0;j<i;j++){
                printf("*");
           }printf("\n");
    }
}