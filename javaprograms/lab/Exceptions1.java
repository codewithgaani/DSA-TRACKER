// File: Exceptions1.java
package lab;
import java.util.Scanner;
// package lab;
// import java.util.Scanner;    
public class Exceptions1 {

    public static void division(int num1, int num2) {
        try {
            if (num2 == 0) {
                throw new ArithmeticException("Division by zero");
            }
            System.out.println("Result= " + (num1 / num2));
        } catch (ArithmeticException e) {
            System.out.println(e.getMessage());
        } finally {
            System.out.println("Termination of program");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num1, num2;
        System.out.println("Enter number 1");
        num1 = sc.nextInt();
        System.out.println("Enter number 2");
        num2 = sc.nextInt();
        division(num1, num2);
        sc.close();
    }
}
