// 2. Write a menu driven java program to do the basic mathematical operations such as
// addition, subtraction, multiplication and division (hint: use if else ladder or switch)
// a. Program should have 4 functions named addition(), substraction(),
// multiplication() and division()
// b. Should create a class object and call the appropriate function as user prefers in the
// main function

package Assignments;

import java.util.Scanner;

/**
 * day7
 */

class Calculator {

    // addition function
    static int addition(int a, int b) {
        return a + b;
    }

    // subtraction function
    static int subtraction(int a, int b) {
        return a - b;
    }

    // multiplication function
    static int multiplication(int a, int b) {
        return a * b;
    }

    // division function
    static double division(int a, int b) {
        return (double) a / b;
    }
}

public class Calc {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Question 2\n\n");
        System.out.println("Enter 2 number: ");
        int a = sc.nextInt();
        int b = sc.nextInt();

        System.out.println("\n1. Addition");
        System.out.println("2. Subtraction"); 
        System.out.println("3. Multiplication");
        System.out.println("4. Division\n");
        
        System.out.println("Select an operation (1-4): ");
        int choice = sc.nextInt();
        
        Calculator calc = new Calculator();
        
        switch(choice){
            case 1: 
                System.out.println(calc.addition(a, b));
                break;
            case 2:
                System.out.println(calc.subtraction(a, b));
                break; 
            case 3:  
                System.out.println(calc.multiplication(a, b)); 
                break;
            case 4:
                System.out.println(calc.division(a, b));
                break;              
        }      
    }
}
