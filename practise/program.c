#include<stdio.h>

int main(){
    int n1, n2, n3;//n1 = 20, n2 = 30 , n3 = 10
    scanf("%d%d%d",&n1,&n2,&n3);
    if (n1<n2)
    {
        if (n1<n3)
        {
            printf("%d is the smallest number,\n", n1);
        }else
        {
            printf("%d is the smallest number,\n",n3);
        }
    }else{
        if (n2<n3)
        {
            printf("%d is the smallest number,\n",n2);
         }else
        {
            printf("%d is the smallest number,\n",n3);
        }
        
        
    }
    

    return 0;

}