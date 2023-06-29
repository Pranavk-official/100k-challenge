#include <stdio.h>

// 1. Write a program to print the multiplication table of given number
// a. Accept an input from the user and display its multiplication table

// Eg:
// Output: Enter a number
// Input: 5
// Output:
// 1x5=5
// 2 x 5 = 10
// 3 x 5 = 15
// 4 x 5 = 20
// 5 x 5 = 25
// 6 x 5 = 30
// 7 x 5 = 35
// 8 x 5 = 40
// 9 x 5 = 45
// 10 x 5 = 50

int main(void){
    printf("Question 1");

    int num, prod;
    printf("\n\nEnter a number: ");
    scanf("%d",&num);
    printf("\n");

    for (int i=1; i<=10; i++) {
        prod=i*num;
        printf("%d x %d = %d\n",i,num,prod);
    }

    // 2. Write a program to find the sum of all the odd numbers for a given limit
    // a. Program should accept an input as limit from the user and display the sum of all
    // the odd numbers within that limit

    // For example if the input limit is 10 then the result is 1+3+5+7+9 = 25
    // Output: Enter a limitInput: 10
    // Output: Sum of odd numbers = 25

    printf("\n\nQuestion 2\n");

    int limit,sum;

    printf("Enter a limit: ");
    scanf("%d", &limit);

    for(int i=1; i<=limit; i+=2) {   // Adding by 2 to get only odd numbers
        sum += i;    
    }

    printf("Sum of odd numbers = %d", sum);

    printf("\n\nQuestion 3\n");

    // 3. Write a program to print the following pattern (hint: use nested loop)
    // 1
    // 12
    // 123
    // 1234
    // 12345

    int rows;

    printf("Enter Limit: ");
    scanf("%d",&rows);

    for (int i=1; i<=rows; i++) {
        for (int j=1; j<=i; j++) {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}


