package programs;
public class Employee {
    String name;
    double basicSalary;
    Employee(String n, double salary) {
        name = n;
        basicSalary = salary;
    }

    void calculateSalary() {
        double bonus = basicSalary * 0.10; 
        double totalSalary = basicSalary + bonus;
        System.out.println("Employee Name: " + name);
        System.out.println("Basic Salary: $" + basicSalary);
        System.out.println("Bonus: $" + bonus);
        System.out.println("Total Salary: $" + totalSalary);
    }


    public static void main(String[] args) {
        // Creating an Employee object
        Employee emp1 = new Employee("Krishna", 50000);
        emp1.calculateSalary();
    }
}

