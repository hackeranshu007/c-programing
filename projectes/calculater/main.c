#include <stdio.h>
#include <math.h>
void print_fn();
int main()
{
    
    int select, a, b, result = 0;

    while (1)
    {
        print_fn();
        printf("\nEnter number from 1 to 7 :-  ");
        scanf("%d", &select);
        if (select <= 6 && select >= 1)
        {
            printf("Enter the first number : ");
            scanf("%d", &a);
            printf("Enter the second number : ");
            scanf("%d", &b);
        }
        switch (select)
        {
        case 1:
            result = a + b;
            break;
        case 2:
            result = a - b;
            break;
        case 3:
            result = a * b;
            break;
        case 4:
            if (b == 0)
            {
                printf("divide is not posible its answer is infinite");
                goto end;
            }
            else
            {
                result = a / b;
            }
            break;
        case 5:
            result = (a*b)/100;
            break;
        case 6:
            result = pow(a, b);
            break;
        case 7:
            goto end;

        default:
            printf("The number you entered is invalid");
            continue;
        }
        printf("\nthe answer is =  %d \n\n", result);
    }
end:

    return 0;
}
void print_fn(){
    printf("\t  CALCULATOR  \t");
    printf("\n------------------------------------------------------------------- \n");
    printf("\nWlecome to calci opterator \n");
    printf("\n1.Addition \n");
    printf("2.Subtraction \n");
    printf("3.multiplication \n");
    printf("4.Division \n");
    printf("5.percentage \n");
    printf("6.Power \n");
    printf("7.exit \n");


}
