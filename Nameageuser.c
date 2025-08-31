#include<stdio.h>
int main()
{
    char name[50];
    int age;
    float marks;
    printf("Enter your name:\n ");
    scanf("%49s", name);
    printf("Enter your age:\n ");
    scanf("%d", &age);
    printf("Enter your marks:\n ");
    scanf("%f", &marks);
    printf("Here are The Student Details\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Marks: %.2f\n", marks);
    return 0;
}