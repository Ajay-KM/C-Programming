#include<stdio.h>
int main()
{
    int a,b;
    char OP;
    printf("Enter Two Numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Enter Operator (+,-,*,/):\n");
    scanf(" %c",&OP);
    switch(OP)
    {
        case '+':
            printf("Sum = %d\n",a+b);
            break;
        case '-':
            printf("Difference = %d\n",a-b);
            break;
        case '*':
            printf("Product = %d\n",a*b);
            break;
        case '/':
            if(b!=0)
                printf("Quotient = %d\n",a/b);
            else
                printf("Division by zero error!\n");
            break;
        default:
            printf("Invalid Operator!\n");
    }
    return 0;
}