// 1. Write a program to interchange the values of two arrays
// a. Program should accept an array from the user, swap the values of two
// arrays and display it on the console Eg: Output: Enter the size of arrays
// Input: 5
// Output: Enter the values of Array 1

// Input: 10, 20, 30, 40, 50
// Output: Enter the values of Array 2

// Input: 15, 25, 35, 45, 55
// Output: Arrays after swapping:
// Array1: 15, 25, 35, 45, 55
// Array2: 10, 20, 30, 40, 50

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  printf("Question 1\n");
  int a1[20], a2[20], temp[20], size;

  //   INPUT

  printf("Enter the size of Array: ");
  scanf("%d", &size);

  printf("\nEnter the values of Array 1");
  printf("\nInput : ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &a1[i]);
  }

  printf("\nEnter the values of Array 2");
  printf("\nInput : ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &a2[i]);
  }

  //   SWAPPING

  for (int i = 0; i < size; i++) {
    temp[i] = a1[i];
    a1[i] = a2[i];
    a2[i] = temp[i];
  }

  printf("\nArrays after swapping: \n");
  printf("\nArray 1: ");
  for (int i = 0; i < size; i++) {
    printf(" %d ", a1[i]);
  }
  printf("\nArray 2: ");
  for (int i = 0; i < size; i++) {
    printf(" %d ", a2[i]);
  }

  // 2. Write a program to find the number of even numbers in an array
  // a. Program should accept an array and display the number of even numbers
  // contained in that array

  // Eg: Output: Enter the size of an array
  // Input: 5
  // Output: Enter the values of array
  // Input: 11, 20, 34, 50, 33
  // Output: Number of even numbers in the given array is 3

  printf("\n\nQuestion 2\n");

  int arr[20], cnt = 0;

  printf("Enter the size of Array: ");
  scanf("%d", &size);

  printf("\nEnter the values of array");
  printf("\nInput : ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 == 0) {
      cnt++;
      printf("%d", cnt);
    }
  }
  printf("\nOutput: Number of even numbers in the given array is %d", cnt);

  //   3. Write a program to sort an array in descending order

  //   a. Program should accept and array, sort the array values in descending
  //   order and display it

  //   Eg: Output: Enter the size of an array
  //   Input: 5
  //   Output: Enter the values of array
  //   Input: 20, 10, 50, 30, 40
  //   Output: Sorted array:
  //   50, 40, 30, 20, 10

  printf("\n\nQuestion 3\n");

  int a[20], i;

  printf("Enter the size of Array: ");
  scanf("%d", &size);

  printf("\nEnter the values of array");
  printf("\nInput : ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &a[i]);
  }
  // Sort the array in descending order
  for (i = 0; i < size - 1; i++) {
    int maxIndex = i;
    for (int j = i + 1; j < size; j++) {
      if (a[j] > a[maxIndex]) {
        maxIndex = j;
      }
    }
    int temp = a[i];
    a[i] = a[maxIndex];
    a[maxIndex] = temp;
  }

  printf("\nOutput: \nSorted Array: ");
  for (int i = 0; i < size; i++) {
    printf(" %d ", a[i]);
  }

  return 0;
}
