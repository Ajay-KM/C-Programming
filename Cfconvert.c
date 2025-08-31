#include <stdio.h>
int main() {
    float cs, ft;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &cs);
    ft = (cs * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", ft);
    return 0;
}
