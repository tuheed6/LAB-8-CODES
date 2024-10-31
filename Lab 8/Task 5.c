//Write a C program to generate a diamond shape pattern using nested loops. The program
//should take the number of rows for the upper half of the diamond as input from the user.


#include <stdio.h>

int main() {
    int rows, i, j, space;

    printf("Enter the number of for the upper half rows of the diamond: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = rows - 1; i >= 1; i--) {
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
