//1. Write a program to take a 2D array input from the user and display its transpose.
#include <stdio.h>

int main() {
    int rows, columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int array[rows][columns]; 
    int i, j; 

   
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    
    
    printf("\nThis is the transpose of your matrix:\n");
    for (i = 0; i < columns; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", array[j][i]); 
        }
        printf("\n"); 
    }

    return 0;
}