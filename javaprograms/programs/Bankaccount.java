package programs;
public class Bankaccount {
    String accountholder;
    double balance;
    Bankaccount(String holder,double initialbalance){
        accountholder=holder;
        balance=initialbalance;
    }
    void deposit(double amount){
        if(amount>0){
        balance=balance+amount;
        System.out.println(amount+" Deposited successfully.");    
    }
    else{
        System.out.println("Invalid deposit amount.");
      }
    }
    void withdraw(double amount){
        if(amount>0&&amount<=balance){
            balance-=amount;
            System.out.println(amount+" Withdrawn successfully.");
        }
        else{
            System.out.println("Insufficient balance.");
        }
    }
    void displaybalance(){
        System.out.println("Account Holder: " + accountholder);
        System.out.println("Current Balance: $" + balance);
    }
    public static void main(String[] args) {
        Bankaccount myAccount = new Bankaccount("Krishna", 50000);
        myAccount.displaybalance();
        myAccount.deposit(15000);
        myAccount.displaybalance();
        myAccount.withdraw(20000);
        myAccount.displaybalance();
        myAccount.withdraw(50000);
    }
}
