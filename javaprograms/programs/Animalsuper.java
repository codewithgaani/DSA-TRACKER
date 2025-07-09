package programs;

public class Animalsuper {
        int x=10;
        void sound() {
            System.out.println("Animal makes sound");
        }
    }
    
    class Dog extends Animalsuper {
        void sound() {
            super.sound();  // Call parent class method
            System.out.println("Dog barks"+super.x);
        }
    }
    class Main {
        public static void main(String[] args) {
            Animalsuper d = new Dog();
            d.sound();  // Calls overridden method in Dog
        }
    }
