import java.util.Arrays;
public class ArrayDemo {
    void arrayFunc(int[] arr, int target) {
        System.out.println("Pairs of elements whose sum is " + target + " are:");
        for (int i = 0; i < arr.length; i++) {
            for (int j = i + 1; j < arr.length; j++) {
                if (arr[i] + arr[j] == target) {
                    System.out.println(arr[i] + " + " + arr[j] + " = " + target);
                }
            }
        }
    }

    void arrayFunc(int[] A, int p, int[] B, int q) {
        int[] merged = new int[p + q];
        for (int i = 0; i < p; i++)
            merged[i] = A[i];
        for (int i = 0; i < q; i++)
            merged[p + i] = B[i];
        Arrays.sort(merged);
        for (int i = 0; i < p; i++)
            A[i] = merged[i];
        for (int i = 0; i < q; i++)
            B[i] = merged[p + i];
        System.out.println("Sorted Arrays:");
        System.out.print("A: " + Arrays.toString(A) + "\n");
        System.out.print("B: " + Arrays.toString(B) + "\n");
    }

    public static void main(String[] args) {
        ArrayDemo obj = new ArrayDemo();
        int[] numbers = { 4, 6, 5, -10, 8, 5, 20 };
        int target = 10;
        obj.arrayFunc(numbers, target);
        int[] A = { 1, 5, 6, 7, 8, 10 };
        int[] B = { 2, 4, 9 };
        obj.arrayFunc(A, A.length, B, B.length);
    }
}