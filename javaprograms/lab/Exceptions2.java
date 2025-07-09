package lab;
import java.util.Scanner;
public class Exceptions2 {

    public static void arrayIndex(int arr[], int index) {
        try {
            if (index < 0 || index > arr.length - 1) {
                throw new IndexOutOfBoundsException("Array index Does not exist");
            }
            System.out.println("The element present at index " + index + " is " + arr[index]);
        } catch (IndexOutOfBoundsException e) {
            System.out.println(e.getMessage());
        }

        finally {
            System.out.println("Termination of Program");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int size;
        System.out.println("Enter the size of array");
        size = sc.nextInt();
        int arr[] = new int[size];
        for (int i = 0; i < size; i++) {
            System.out.println("Enter element no " + (i + 1));
            arr[i] = sc.nextInt();
        }
        int index;
        System.out.println("Enter the index on which you want to find the element");
        index = sc.nextInt();
        arrayIndex(arr, index);
        sc.close();
    }
}
