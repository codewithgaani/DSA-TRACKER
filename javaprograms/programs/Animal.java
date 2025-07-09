package programs;

public class Animal {

    void sound() {
        System.out.println("Animal makes sound");
    }
}

class Dog extends Animal {
    void sound() {
        System.out.println("Dog barks");
    }
}
class Main {
    public static void main(String[] args) {
        Animal d = new Dog();
        d.sound();  // Calls overridden method in Dog
    }
}
//override