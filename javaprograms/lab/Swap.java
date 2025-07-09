package lab;

import java.util.Scanner;

public class Swap {

    public static <T> void swap(T arr[], int i, int j) {
        T temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int size;
        System.out.println("Enter the size of array");
        size = sc.nextInt();
        Integer arr[] = new Integer[size];
        for (int i = 0; i < size; i++) {
            System.out.println("Enter element no. " + (i + 1));
            arr[i] = sc.nextInt();
        }
        swap(arr, 2, 3);
        for (int i = 0; i < size; i++) {
            System.out.print(arr[i] + " ");
        }
        sc.close();
    }
}
