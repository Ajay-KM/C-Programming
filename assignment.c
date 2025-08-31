#include <stdio.h>
int main() {
    int a = 10, b;
    printf("Initial value of a = %d\n", a);
    b = a;
    printf("b = a  → b = %d\n", b);
    a += 5;
    printf("a += 5 → a = %d\n", a);
    a -= 3;
    printf("a -= 3 → a = %d\n", a);
    a *= 2;   
    printf("a *= 2 → a = %d\n", a);
    a /= 4;
    printf("a /= 4 → a = %d\n", a);
    a %= 3;
    printf("a %%= 3 → a = %d\n", a);
    return 0;
}
