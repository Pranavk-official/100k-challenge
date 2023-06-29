// 1. Write a java program to check whether a given number is prime or not
// a. Program should accept an input from the user and display whether the number is
// prime or not
// Eg: Output: Enter a number
// Input: 7
// Output: Entered number is a Prime number

package Assignments;

import java.util.Scanner;

/**
 * day7
 */
public class PrimeNumber {

    public static void main(String[] args) {

        System.out.println("Question 1\n\n");
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int n = sc.nextInt();

        boolean isPrime = isPrime(n);

        if (isPrime) {
            System.out.println("Entered number is a Prime number.");
        } else {
            System.out.println("Entered number is not a Prime number.");
        }

        System.out.println("\n\nQuestion 2\n\n");
    }

    public static boolean isPrime(int n) {
        if (n <= 1) {
            return false;
        }

        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                return false;
            }
        }

        return true;
    }
}