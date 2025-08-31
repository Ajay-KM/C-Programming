#include <stdio.h>
int main() {
    int num, reversed = 0, digit, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num; 
    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    if (temp == reversed)
        printf("%d is a Palindrome number.\n", temp);
    else
        printf("%d is NOT a Palindrome number.\n", temp);
    return 0;
}
