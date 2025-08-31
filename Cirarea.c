#include<stdio.h>
#define PI 3.14
int main()
{
    float r,area,cir;
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    cir = 2 * PI * r;
    area = PI * r * r;
    printf("Circumference of circle: %.2f\n", cir);
    printf("Area of circle: %.2f\n", area);
    return 0;
}