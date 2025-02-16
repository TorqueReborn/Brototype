package day.zero.seven.two;

import java.util.Scanner;

public class NumberInput {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter first number: ");
        int num1 = scanner.nextInt();
        System.out.print("Enter second number: ");
        int num2 = scanner.nextInt();

        System.out.println("Result: " + (num1 + num2));

        scanner.close();

    }
}