#include <stdio.h>

int main() {
    int age, current_year,birth_year;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter current year: ");
    scanf("%d", &current_year);


    birth_year = current_year - age;

    printf("Your birth year is: %d\n", birth_year);

    return 0;
}





