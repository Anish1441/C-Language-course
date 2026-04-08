#include <stdio.h>

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    printf("Max of 10 and 20 is: %d\n", findMax(10, 20));
    return 0;
}