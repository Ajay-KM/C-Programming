#include<stdio.h>
int main()
{
    int a,b,c,sum;
    float avg;
    printf("Enter Three Numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    avg=sum/3;
    printf("Sum Of %d,%d and %d is %d\n",a,b,c,sum);
    printf("Average of %d,%d and %d is %f",a,b,c,avg);
    return 0;
}