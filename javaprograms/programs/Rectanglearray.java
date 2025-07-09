package programs;
import java.util.Scanner;

class Rectangle {
    private double length;
    private double width;
    public Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    public double calculateArea() {
        return length * width;
    }

    public void display() {
        System.out.println("Length: " + length + ", Width: " + width + ", Area: " + calculateArea());
    }
}

public class Rectanglearray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of rectangles: ");
        int numRectangles = sc.nextInt();

        Rectangle[] rectangles = new Rectangle[numRectangles];
        for (int i = 0; i < numRectangles; i++) {
            System.out.print("Enter length for rectangle " + (i + 1) + ": ");
            double length = sc.nextDouble();
            System.out.print("Enter width for rectangle " + (i + 1) + ": ");
            double width = sc.nextDouble();
            rectangles[i] = new Rectangle(length, width);
        }

        System.out.println("\nRectangle Details:");
        for (Rectangle rectangle : rectangles) {
            rectangle.display();
        }

        sc.close();
    }
}
