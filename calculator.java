import java.util.Scanner;

public class calculator {
    public static void main(String[] agrs) {
        Scanner Input = new Scanner(System.in);

        System.out.print("\nEnter the first number: ");
        double num1 = Input.nextDouble();

        System.out.print("Enter the first number: ");
        double num2 = Input.nextDouble();

        System.out.print(
                "\nWhat operation would you like to perform? [1, 2, 3, 4]\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nType here: ");
        int operation = Math.abs(Input.nextInt());

        if (operation == 1) {
            double answer = num1 + num2;
            System.out.print("\nThe sum of " + num1 + " and " + num2 + " is " + answer + "!");
        }

        else if (operation == 2) {
            double answer = num1 - num2;
            System.out.print("\nThe difference of " + num1 + " and " + num2 + " is " + answer + "!");
        }

        else if (operation == 3) {
            double answer = num1 * num2;
            System.out.print("\nThe product of " + num1 + " and " + num2 + " is " + answer + "!");
        }

        else if (operation == 4) {
            double answer = num1 / num2;
            System.out.print("\nThe quotient of " + num1 + " and " + num2 + " is " + answer + "!");
        }

        else {
            System.out.print("\n" + operation + " is not a valid operation selector.");
        }

        Input.close();

    }
}
