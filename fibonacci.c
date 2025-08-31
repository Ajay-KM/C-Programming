#include <stdio.h>
int main() {
    int n, i;
    long long first = 0, second = 1, next;
    printf("Enter how many Fibonacci numbers to print: ");
    scanf("%d", &n);
    printf("First %d Fibonacci numbers:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%lld ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
    return 0;
}
