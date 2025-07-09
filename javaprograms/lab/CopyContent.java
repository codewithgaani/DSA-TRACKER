package lab;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class CopyContent {

    public static void main(String[] args) throws IOException {
        FileReader fr = new FileReader("user_input.txt");
        FileWriter fw = new FileWriter("user1_input.txt");
        int ch;
        while ((ch = fr.read()) != -1) {
            fw.write((char) ch);
        }
        fr.close();
        fw.close();
    }
}
