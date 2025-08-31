#include <stdio.h>
int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;  
    while (num > 0) {
        if (num & 1)  
            count++;
        num = num >> 1;  
    }
    printf("Number: %d\n", temp);
    printf("Number of set bits (1s): %d\n", count);
    return 0;
}
