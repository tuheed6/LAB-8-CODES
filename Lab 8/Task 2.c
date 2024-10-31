//Generate a pattern of odd numbers in decreasing order starting from a user-specified number
//using nested loops.

#include <stdio.h>

int main (){

    int highestPoint;
    printf("Input your Highest point: ");
    scanf("%d", &highestPoint);

    while( highestPoint != 0 ){
         
        if( highestPoint % 2 != 0){
        printf("%d", highestPoint);

        highestPoint-=1;
        }
        else{
            highestPoint-=1;
        }
    }
    return 0;
}