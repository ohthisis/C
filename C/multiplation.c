#include <stdio.h>

int main() {
    int number, i;

    // Input the number for which multiplication table is to be printed
    printf("Enter the number for multiplication table: ");
    scanf("%d", &number);

    // Print the multiplication table
    printf("Multiplication Table of %d:\n", number);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
