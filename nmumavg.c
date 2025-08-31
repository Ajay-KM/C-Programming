#include <stdio.h>
int main() {
    int n, i;
    float sum = 0, avg;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        float num;
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }
    avg = sum / n;
    printf("Average of %d numbers = %.2f\n", n, avg);
    return 0;
}
