package lab;
import java.util.Scanner;
import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class ReadWrite {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try (BufferedWriter writer = new BufferedWriter(new FileWriter("user_input.txt"))) {
            String sentence;
            System.out.println("Enter a sentence");
            sentence = sc.nextLine();
            writer.write(sentence);
        } catch (IOException e) {
            System.out.println(e.getMessage());
        }
        try (BufferedReader reader = new BufferedReader(new FileReader("user_input.txt"))) {
            String line;
            while ((line = reader.readLine()) != null) {
                System.out.println(line);
            }
        } catch (IOException e) {
            System.out.println(e.getMessage());
        }
        sc.close();
    }
}
