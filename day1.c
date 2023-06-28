#include <stdio.h>

// Part 2 - Variables, Datatypes & I/O Operations

int main(void){
    int num1,num2,sum,temp;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&num1,&num2);
    sum = num1+num2;
    printf("Sum = %d",sum);

    // Swapping

    printf("\n\n\n");
    printf("Swapping num1:%d and num2:%d",num1,num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("Swapped values : \n num1:%d and num2:%d",num1,num2);
}

