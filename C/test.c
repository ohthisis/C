#include <stdio.h>

void printMultiplicationTable(int number, int limit) {
    printf("Multiplication Table for %d:\n", number);
    for (int i = 1; i <= limit; ++i) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}

int main() {
    int number, limit;

    printf("Enter the number for which you want to print the multiplication table: ");
    scanf("%d", &number);

    printf("Enter the limit for the multiplication table: ");
    scanf("%d", &limit);

    printMultiplicationTable(number, limit);

    return 0;
}
