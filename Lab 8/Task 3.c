//Write a C program to find the saddle point(s) in a given 3x3 matrix. A saddle point is an element
//that is the smallest in its row and the largest in its column.

#include <stdio.h>

int main() {
    int matrix[3][3];
    
    printf("Enter elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int number = 0;

    for (int i = 0; i < 3; i++) {
        int lowestInRow = matrix[i][0];
        int columnIndex = 0;

        for (int j = 1; j < 3; j++) {
            if (matrix[i][j] < lowestInRow) {
                lowestInRow = matrix[i][j];
                columnIndex = j;
            }
        }

        int isSaddlePoint = 1;
        for (int k = 0; k < 3; k++) {
            if (matrix[k][columnIndex] > lowestInRow) {
                isSaddlePoint = 0;
                break;
            }
        }

        if (isSaddlePoint) {
            printf("Saddle point found at matrix[%d][%d] = %d\n", i, columnIndex, lowestInRow);
            number = 1;
        }
    }

    if (!number) {
        printf("No saddle point found in the matrix.\n");
    }

    return 0;
}
