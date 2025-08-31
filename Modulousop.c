#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two integers (a and b): ");
    scanf("%d %d", &a, &b);
    if (b != 0) {
        printf("%d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
    return 0;
}
