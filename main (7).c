#include <stdio.h>

int main(){

int num = 10;
int *ptr = &num; // ptr holds address of num

printf("Value: %d\n", *ptr);

return 0;
}
        
