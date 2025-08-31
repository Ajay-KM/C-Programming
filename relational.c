#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two integers (a and b): ");
    scanf("%d %d", &a, &b);
    printf("\n--- Relational Operator Results ---\n");
    printf("a == b : %d\n", (a == b));
    printf("a != b : %d\n", (a != b));
    printf("a > b  : %d\n", (a > b));
    printf("a < b  : %d\n", (a < b));
    printf("a >= b : %d\n", (a >= b));
    printf("a <= b : %d\n", (a <= b));
    return 0;
}
