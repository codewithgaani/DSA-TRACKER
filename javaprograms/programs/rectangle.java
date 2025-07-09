package programs;
public class rectangle {
    double length;
    double width;
    void lb(double l, double w) {
        length = l;
        width = w;
    }
    double calculateArea() {
        return length * width;
    }
    double calculatePerimeter() {
        return 2 * (length + width);
    }

    public static void main(String[] args) {
        rectangle rect = new rectangle();
        rect.lb(5.0, 3.0);
        double area = rect.calculateArea();
        double perimeter = rect.calculatePerimeter();
        System.out.println("Rectangle Area: " + area);
        System.out.println("Rectangle Perimeter: " + perimeter);
    }
}
