#include <stdio.h>

int main(void){
    int rows;

    printf("Enter Rows: ");
    scanf("%d",&rows);

    for (int i=1; i<rows; i++) {
        for (int j=i; j<=rows; j++) {
            printf("  ");                
        }
        for (int j=1; j<i; j++) {
            printf("* ");                
        }
        for (int j=1; j<=i; j++) {
            printf("* ");                
        }
        printf("\n");
    }
    for (int i=1; i<=rows; i++) {
        for (int j=1; j<=i; j++) {
            printf("  ");                
        }
        for (int j=i; j<rows; j++) {
            printf("* ");                
        }
        for (int j=i; j<=rows; j++) {
            printf("* ");                
        }
        printf("\n");
    }


    return 0;
}