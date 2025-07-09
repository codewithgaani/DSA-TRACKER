package programs;
abstract class Ban {
        abstract void deposit(double amount);
        abstract void withdraw(double amount);
}
class Savingsaccount extends Ban{

    double balance=0;
    void deposit(double amount){
        balance+=amount;
        System.out.println("Savings deposit:"+balance);
    }
    void withdraw(double amount){
        if(balance < amount){
            System.out.println("Insufficient balance");
        }
        else{
            balance-=amount;
            System.out.println("Savings withdraw:"+balance);
        }
    }
}
class CurrentAccount extends Ban{
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
    public static void main(String args[]){
        Ban acc1=new Savingsaccount();
        acc1.deposit(2000);
        acc1.withdraw(1000);
        Ban acc2=new CurrentAccount();
        acc2.deposit(5000);
        acc2.withdraw(2000);
    }
}
