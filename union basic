#include <stdio.h>


union Value {
    int i;
    float f;
};

int main() {
    union Value val;

   
    val.i = 100;
    printf("Integer: %d\n", val.i);

    
    val.f = 45.5;
    printf("Float: %.1f\n", val.f);

    /
    printf("Integer after float assignment: %d\n", val.i);

    return 0;
}
