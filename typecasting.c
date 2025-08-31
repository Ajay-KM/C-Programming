#include <stdio.h>
int main() {
    int a = 9, b = 2;
    float result1, result2;
    printf("a = %d, b = %d\n", a, b);
    result1 = a / b;
    printf("Without type casting: %d / %d = %.2f\n", a, b, result1);
    result2 = (float)a / b;
    printf("With type casting   : (float)%d / %d = %.2f\n", a, b, result2);
    char ch = 'A';
    printf("Character: %c, ASCII value (after casting): %d\n", ch, (int)ch);
    return 0;
}
