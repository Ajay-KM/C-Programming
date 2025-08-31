#include <stdio.h>
#define PI 3.14159
int main() {
    const int DAYS_IN_WEEK = 7;
    const float GRAVITY = 9.8;
    int radius = 5;
    float area;
    area = PI * radius * radius;
    printf("Demonstration of Constants in C\n");
    printf("----------------------------------\n");
    printf("Days in a Week: %d\n", DAYS_IN_WEEK);
    printf("Value of Gravity: %.2f m/s^2\n", GRAVITY);
    printf("Value of PI: %.5f\n", PI);
    printf("Radius of Circle: %d\n", radius);
    printf("Area of Circle = PI * r * r = %.2f\n", area);

    return 0;
}
