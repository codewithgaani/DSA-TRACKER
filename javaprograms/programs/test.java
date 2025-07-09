package programs;
// File name: Test.java

public class test {

    class A {
        void showA() {
            System.out.println("A");
        }
    }

    class B extends A {
        void showB() {
            System.out.println("B");
        }
    }

    class C extends B {
        void showC() {
            System.out.println("C");
        }
    }

    public static void main(String[] args) {
        test t = new test();
        C obj = t.new C();

        obj.showA();
        obj.showB();
        obj.showC();
    }
}
