#include <stdio.h>
#include <string.h> 

int main() {
    char greeting[30] = "Hello"; 
    char name[] = "Programmer";

 
    strcat(greeting, ", ");
    strcat(greeting, name);

    printf("Message: %s\n", greeting);

    
    printf("String Length: %lu\n", strlen(greeting));

    return 0;
}