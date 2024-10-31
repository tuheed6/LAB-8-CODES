#include <stdio.h>

int main() {
    int start, end;

    printf("Input the range of numbers : ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    int i;
    for (i = start; i <= end; i++) {
        if (i < 2) continue; 

        int isPrime = 1; 
        for (int j = 2; j * j <= i; j++) { 
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime) {
            printf("%d ", i); 
        }
    }
    printf("\n");
    return 0;
}
