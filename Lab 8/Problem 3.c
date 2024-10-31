//Create a 3D array representing 2 pages of a 3x3 matrix. Initialize it and find the sum of all the elements on each page.


#include <stdio.h>

int main() {
    int array[2][3][3]; 
    int sumPage1 = 0, sumPage2 = 0;

    // Input elements for each page
    for (int page = 0; page < 2; page++) {
        printf("Enter elements for Page %d:\n", page + 1);
        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {


                printf("Enter element at [%d][%d][%d]: ", page, i, j);
                scanf("%d", &array[page][i][j])


                if (page == 0) 
                {
                    sumPage1 += array[page][i][j];

                }
                
                 else 
                {
                    sumPage2 += array[page][i][j];
                }
            }
        }
    }

    printf("\nSum of elements on Page 1: %d\n", sumPage1);
    printf("Sum of elements on Page 2: %d\n", sumPage2);

    return 0;
}
