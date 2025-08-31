#include <stdio.h>
#include <math.h> 
int main() {
    float a, b, c, dis, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    dis = b*b - 4*a*c;
    if (dis > 0) {
        root1 = (-b + sqrt(dis)) / (2*a);
        root2 = (-b - sqrt(dis)) / (2*a);
        printf("Roots are real and different.\n");
        printf("Root1 = %.2f\nRoot2 = %.2f\n", root1, root2);
    }
    else if (dis == 0) {
        root1 = root2 = -b / (2*a);
        printf("Roots are real and equal.\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    }
    else {
        realPart = -b / (2*a);
        imagPart = sqrt(-dis) / (2*a);
        printf("Roots are complex and different.\n");
        printf("Root1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root2 = %.2f - %.2fi\n", realPart, imagPart);
    }
    return 0;
}
