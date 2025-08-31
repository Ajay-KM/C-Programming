#include <stdio.h>
int main()
 {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    (num % 2 == 0) ? 
        printf("%d is Even\n", num) : 
        printf("%d is Odd\n", num);
    int a, b, max;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b;
    printf("The maximum Between %d and %d is %d\n", a, b, max);
    return 0;
}
