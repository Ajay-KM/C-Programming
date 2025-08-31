#include <stdio.h>

int main() {
    double num, guess, root;
    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num < 0) {
        printf("Square root of a negative number is not real.\n");
    } else {
        guess = num / 2;  
        for (int i = 0; i < 10; i++) {  
            guess = (guess + num / guess) / 2;
        }
        root = guess;
        printf("Square root of %.2lf ≈ %.5lf\n", num, root);
    }
    return 0;
}
