#include <stdio.h>
int main() {
    char ch;
    int i;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("The ASCII value of '%c' is %d\n\n", ch, ch);
    printf("ASCII values of A-Z:\n");
    for(i = 'A'; i <= 'Z'; i++) {
        printf("%c = %d\n", i, i);
    }
    printf("\nASCII values of a-z:\n");
    for(i = 'a'; i <= 'z'; i++) {
        printf("%c = %d\n", i, i);
    }
    printf("\nASCII values of 0-9:\n");
    for(i = '0'; i <= '9'; i++) {
        printf("%c = %d\n", i, i);
    }
    return 0;
}
