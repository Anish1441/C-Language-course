#include <stdio.h>

int sum(int k) {
    if (k > 0) return k + sum(k - 1); // Recursive step
    else return 0; // Base case
}

int main() {
    printf("Sum of numbers 1 to 10: %d\n", sum(10));
    return 0;
}