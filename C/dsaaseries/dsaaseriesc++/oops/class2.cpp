#include<iostream>
using namespace std;
class customer{
    string name;
    int accno;
    int bal;
    public:
    //default constructor
    customer()
    {
        name="rohit";
        accno=12;
        bal=1222;
    }
    //parameterized constructor
    // customer (string a,int b,int c){
    //     name=a;
    //     accno=b;
    //     bal=c;
    // }
    //constructor overloading
    customer(string name,int accno){
        this->name =name;
       this-> accno=accno;}
      //inline constructor
     inline customer(string a,int b,int c):name(a),accno(b),bal(c){

     }  
    
    void display(){
        cout<<name<<" "<<accno<<" "<<bal<<endl;
    }
    //copy constructor
    customer(customer &f){ 
        name=f.name;
        accno=f.accno;
        bal=f.bal;
    }
};
int main(){
    customer a1;
    customer a2("gani",21,12222);
    customer a3("roll",25,10000);
    a1.display();
    a2.display();
    a3.display();
    customer a4(a2); //copy constructor
    a4.display();
}