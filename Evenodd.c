#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number To Check For Even and odd:\n");
    scanf("%d",&num);
    if(num%2==0)
        printf("%d is Even Number\n",num);
    else
        printf("%d is Odd Number\n",num);
    return 0;
}