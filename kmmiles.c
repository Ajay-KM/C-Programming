#include <stdio.h>
int main() 
{
    float kilometers, miles;
    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);
    miles = kilometers * 0.621371;
    printf("%.2f kilometers = %.2f miles\n", kilometers, miles);
    return 0;
}
