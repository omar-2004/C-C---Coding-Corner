#include <stdio.h>

int main(void)
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Here is your birth year: %d", 2023 - age);
    return 0;
}
