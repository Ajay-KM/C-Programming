#include <stdio.h>
int main() {
    int num, n, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the bit position to toggle (0 for LSB): ");
    scanf("%d", &n);
    result = num ^ (1 << n);
    printf("Original number: %d\n", num);
    printf("Number after toggling %d-th bit: %d\n", n, result);
    return 0;
}
