#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int age,rollno;
    string grade;
    //function getter and setter 
    public:
    void setname(string s)
    {
        name =s;
    }
    void setage(int a)
    {
        age=a;
    }
    void setrollno(int r)
    {
        rollno=r;
    }    
    void setgrade(string s)
    {
        grade=s;
    }
    int getname(){
        cout<< name<<endl;
    }
     int getage(){
        cout<<age<<endl;
    }
     string getgrade(){
        return grade;
    }
     int getrollno(){
        return rollno;
    }
     
};
int main(){
   student s1;
   s1.setname("krishna");
   s1.setage(20);
   s1.setrollno(2);
   s1.setgrade("a");
   s1.getname();
   s1.getage();
   cout<<s1.getgrade()<<endl;
   cout<<s1.getrollno()<<endl;
   
}  