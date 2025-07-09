package programs;
interface Animalll{
    void sound();
}
class Dog implements Animalll{
    public void sound(){
        System.out.println("Bark");
    }
}
class Main{
    public static void main(String args[]){
        Animalll d=new Dog();
        d.sound();
    }
}