#include <stdio.h>
int main() {
    int num, reversed = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;  
    while (num > 0) {
        digit = num % 10;              
        reversed = reversed * 10 + digit; 
        num = num / 10;                
    }
    printf("Original number: %d\n", temp);
    printf("Reversed number: %d\n", reversed);
    return 0;
}
