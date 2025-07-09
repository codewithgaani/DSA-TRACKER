package programs;
public class student {
    String name;
    int rollnumber;
    float marks;
    void getinfo(String n,int rn,float m){
        name=n;
        rollnumber=rn;
        marks=m;
    }
    void displayinfo(){
        System.out.println("Student name:"+name);
        System.out.println("Student rollnumber:"+rollnumber);
        System.out.println("Student name:"+marks);

    }
    public static void main(String[] args) {  
        // Creating an object of Student class  
        student s1 = new student();  

        // Calling methods  
        s1.getinfo("Krishna", 42, 100f);  
        s1.displayinfo();  
}
}

