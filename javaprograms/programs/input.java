package programs;
import java.util .Scanner;
public class input{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter your name:");
        String name=sc.nextLine();
        System.out.println("enter your age:");
        int age=sc.nextInt();
        System.out.println("enter your salary:");
        double salary=sc.nextDouble();
        System.out.println("your name is:"+name);
        System.out.println("your age is:"+age);
        System.out.println("your salary is:"+salary);
        sc.close();
}
}