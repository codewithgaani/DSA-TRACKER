package programs;
public class overload {
    overload(){
        System.out.println("Dog is default name with no age and color ");
    }
    overload(String name,int age){
        System.out.println(name+" "+age);
    }
    overload(String name,int age,String color){
        System.out.println(name+" "+age+" "+color);
    }
}
class Main {
public static void main(String[] args) {
    overload obj1 = new overload();
    overload obj2 = new overload("riyaa",20);
    overload obj3 = new overload("riyaarand",20,"brown");   
}
}
/*overloading member function 
class Calculator {
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
}

public class Test {
    public static void main(String[] args) {
        Calculator calc = new Calculator();
        System.out.println(calc.add(2, 3));
        System.out.println(calc.add(2.5, 3.5));
        System.out.println(calc.add(1, 2, 3));
    }
}
 */