#include <stdio.h>
int main() {
    int a = 12;
    int b = 25;
    printf("a = %d, b = %d\n", a, b);
    printf("a & b = %d\n", a & b);   
    printf("a | b = %d\n", a | b);   
    printf("a ^ b = %d\n", a ^ b);   
    printf("~a = %d\n", ~a);         
    printf("a << 1 = %d\n", a << 1); 
    printf("b >> 2 = %d\n", b >> 2); 
    return 0;
}
