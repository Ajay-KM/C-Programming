#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("\nDemonstrating Logical Operators\n");
    printf("----------------------------------\n");
    if (a > 0 && b > 0) {
        printf("Both a and b are positive numbers\n");
    } else {
        printf("At least one of a or b is NOT positive\n");
    if (a > 0 || b > 0) {
        printf("At least one of a or b is positive\n");
    } else {
        printf("Neither a nor b is positive\n");
    }
    if (!(a > 0)) {
        printf("a is NOT positive\n");
    } else {
        printf("a is positive\n");}
    return 0;
}
