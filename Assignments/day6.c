// 1. Write a program to identify whether a string is a palindrome or not
// a. A string is a palindrome if it reads the same backward or forward eg:
// MALAYALAM
// b. Program should accept a string and display whether the string is a
// palindrome or not Eg: Output: Enter a string Input: MALAYALAM Output: Entered
// string is a palindrome Eg 2: Output: Enter a string Input: HELLO Output:
// Entered string is not a palindrome

#include <stdio.h>
#include <string.h>

void getArray(int arr[], int size);
void displayArray(int arr[], int size);

int main(void) {
  printf("Question 1\n\n");

  char string[20];
  printf("Enter a string");
  printf("\nInput: ");
  scanf("%s", string);

  int len = strlen(string);

  for (int i = 0, j = len - 1; i < j; i++, j--) {
    if (string[i] != string[j]) {
      printf("%s is not a palindrome\n", string);
      return 0;
    }
  }

  printf("%s is a palindrome\n", string);

  // 2. Write a program to add to two dimensional arrays
  // a. Program should accept two 2D arrays and display its sum

  // Eg: Output: Enter the size of arrays
  // Input: 3
  // Output: Enter the values of array 1
  // Input:
  // 1 2 3
  // 4 5 6
  // 7 8 9
  // Output: Enter the values of array 2
  // Input:
  // 10 20 30
  // 40 50 60
  // 70 80 90
  // Output: Sum of 2 arrays is:
  // 11 22 33
  // 44 55 66
  // 77 88 99

  printf("\n\nQuestion 2\n\n");

  int row, col;

  printf("Enter the size of arrays: ");
  scanf("%d %d", &row, &col);

  int array1[row][col], array2[row][col];
  int sum[row][col];

  printf("Enter the values of array 1: \n");
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      scanf("%d", &array1[i][j]);
    }
  }

  printf("Enter the values of array 2: \n");
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      scanf("%d", &array2[i][j]);
    }
  }

  printf("\nOutput \nSum of 2 arrays is: \n");
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {

      sum[i][j] = array1[i][j] + array2[i][j];
      printf("%d ", sum[i][j]);
    }
    printf("\n");
  }

  // 3. Write a program to accept an array and display it on the console using
  // functions a. Program should contain 3 functions including main() function
  // main()
  // 1. Declare an array
  // 2. Call function getArray()
  // 3. Call function displayArray()
  // getArray()
  // 1. Get values to the array
  // displayArray()
  // 1. Display the array values

  printf("\n\nQuestion 3\n\n");
  int size;
  printf("\nEnter the size of the array: ");
  scanf("%d", &size);

  int array[size];

  getArray(array, size);
  displayArray(array, size);

  return 0;

  getArray(array, size);     // Call getArray()
  displayArray(array, size); // Call displayArray()

  return 0;
}

void getArray(int arr[], int size) {
  printf("\nEnter Array values: ");
  printf("\nInput: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }
}

void displayArray(int arr[], int size) {
  printf("Array : ");

  for(int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");
}