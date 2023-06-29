#include <stdio.h>

int main(void){
    int rows;

    printf("Enter Limit: ");
    scanf("%d",&rows);

    for (int i=1; i<=rows; i++) {
        for (int j=i; j<=i; j++) {
            printf(" ");
        }
        for (int j=1; j<=i; j++) {
            printf("*");
        }
    }

    return 0;
}