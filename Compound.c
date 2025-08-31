#include <stdio.h>
#include <math.h>  
int main() {
    float principal, rate, time, amount, compoundInterest;
    printf("Enter Principal amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);
    printf("Enter Time (in years): ");
    scanf("%f", &time);
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;
    printf("\nPrincipal = %.2f", principal);
    printf("\nRate of Interest = %.2f%%", rate);
    printf("\nTime = %.2f years", time);
    printf("\nCompound Interest = %.2f", compoundInterest);
    printf("\nTotal Amount = %.2f\n", amount);
    return 0;
}
