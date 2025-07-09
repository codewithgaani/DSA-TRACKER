package programs;
abstract class Ban {
        abstract void deposit(double amount);
        abstract void withdraw(double amount);
    }
    
    class SavingsAccount extends Ban {
        double balance = 0;
    
        void deposit(double amount) {
            balance += amount;
            System.out.println("Savings Deposit: " + amount);
        }
    
        void withdraw(double amount) {
            balance -= amount;
            System.out.println("Savings Withdraw: " + amount);
        }
    }
    
    class CurrentAccount extends Ban {
        double balance = 0;
    
        void deposit(double amount) {
            balance += amount;
            System.out.println("Current Deposit: " + amount);
        }
    
        void withdraw(double amount) {
            balance -= amount;
            System.out.println("Current Withdraw: " + amount);
        }
    }
    
     class Main {
        public static void main(String[] args) {
            Ban acc1 = new SavingsAccount();  // Using abstract reference
            acc1.deposit(5000);
            acc1.withdraw(1500);
    
            Ban acc2 = new CurrentAccount();  // Using abstract reference
            acc2.deposit(10000);
            acc2.withdraw(3000);
        }
    }
