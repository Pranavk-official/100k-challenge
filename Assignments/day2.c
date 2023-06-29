// 1. Accept a char input from the user and display it on the console

#include <stdio.h>

int main() 
{
    printf("Question 1\n");

    char input;
    
    printf("Enter a character: ");
    
    scanf(" %c", &input);

    printf("You entered: %c", input);
    
    printf("\n\nQuestion 2\n");

    // 2. Accept two inputs from the user and output its sum
    // Variable     Data Type
    // Number 1     Integer
    // Number 2     Float
    // Sum          Float

    int num1;
    float num2,sum;

    printf("Enter num1 : ");
    scanf(" %d", &num1);
    printf("Enter num2 : ");
    scanf(" %f", &num2);

    sum = num1+num2;
    printf("Sum : %f",sum);

    // 3. Write a program to find the simple interest.
    // a. Program should accept 3 inputs from the user and calculate simple interest for
    // the given inputs. Formula: SI=(P*R*n)/100)
    // Variable                 Data Type
    // Principal amount (P)     Integer
    // Interest rate (R)        Float
    // Number of years (n)      Float
    // Simple Interest (SI)     Float

    printf("\n\nQuestion 3\n");

    int p;
    float r,n,si;

    printf("Enter Principal amount (P) : ");
    scanf(" %d", &p);
    printf("Enter Interest rate (R) : ");
    scanf(" %f", &r);
    printf("Enter Number of years (n) : ");
    scanf(" %f", &n);

    si = (p*r*n)/100;

    printf("Simple Interest (SI) : %f",si);

    return 0;
}



