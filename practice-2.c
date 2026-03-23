// removing decimal from the integer value and priting both sepretly(input taking from user)                 
#include <stdio.h>  
int main() {
    float num;
    int integerPart;
    float decimalPart;

    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    integerPart = (int)num; // Extracting the integer part
    decimalPart = num - integerPart; // Extracting the decimal part

    printf("Integer Part: %d\n", integerPart);
    printf("Decimal Part: %.2f\n", decimalPart);

    return 0;
}
