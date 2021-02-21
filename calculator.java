import java.util.Scanner;

public class calculator {
    public static void main(String[] agrs) {
        Scanner Input = new Scanner(System.in);

        System.out.print("\nEnter the first number: ");
        double number1 = Input.nextDouble();

        System.out.print("Enter the second number: ");
        double number2 = Input.nextDouble();

        System.out.print(
                "\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nEnter the operation number would you like to perform: ");
        int operation = Math.abs(Input.nextInt());

        Input.close();

        switch (operation) {
            case 1:
                add(number1, number2);
                break;
            case 2:
                sub(number1, number2);
                break;
            case 3:
                mul(number1, number2);
                break;
            case 4:
                div(number1, number2);
                break;
            default:
                System.out.println("\n" + operation + " is an invalid operation...");
                break;
        }
    }

    public static void add(double num1, double num2) {
        double answer = num1 + num2;
        System.out.print("\nThe sum of " + num1 + " and " + num2 + " is " + answer + "!");
    }

    public static void sub(double num1, double num2) {
        double answer = num1 - num2;
        System.out.print("\nThe difference of " + num1 + " and " + num2 + " is " + answer + "!");
    }

    public static void mul(double num1, double num2) {
        double answer = num1 * num2;
        System.out.print("\nThe product of " + num1 + " and " + num2 + " is " + answer + "!");
    }

    public static void div(double num1, double num2) {
        double answer = num1 / num2;
        System.out.print("\nThe quotient of " + num1 + " and " + num2 + " is " + answer + "!");
    }
}
