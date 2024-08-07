#include <iostream>
#include <string>

using namespace std;

class Teacher{
    //properties
    double salary;

    public:

        // Teacher(){ Non-parameterized.
        //     dept = "Computer Science";
        // }

        Teacher(string n, string d, string s, double sal){
            name = n;
            dept = d;
            subject = s;
            salary = sal;
        }//Parameterized.

        //  Teacher(string name, string dept, string subject, double salary){
        //     this->name = name;
        //     this->dept = dept;
        //     this->subject = subject;
        //     this->salary = salary;
        // } By using this pointer... as we want the parameters of the constructors to be named properly so we can use this so that compiler is not confused.

        Teacher(Teacher &orgob){
            this->name = orgob.name;
            this->dept = orgob.dept;
            this->subject = orgob.subject;
            this->salary = orgob.salary;
        }

        string name;
        string dept;
        string subject;

        
    //methods : member functions
        void changeSalary(string newDept){
            dept = newDept;
        }
        //setter
        void setSalary(double s){
            salary = s;
        }
        //getter
        double getSalary(){
            return salary;
        }

        void getInfo(){
            cout<<endl<<"Name: "<<name<<endl;
            cout<<endl<<"Department: "<<dept<<endl;
            cout<<endl<<"Suject: "<<subject<<endl;
            cout<<endl<<"Salary: "<<salary<<endl;
        }
};

int main()
{
    Teacher t1("Nalini", "IT", "C++", 25000);
    // Teacher t2;
    // Teacher t3;

//     t1.name = "Nalini";
//     t1.subject = "C++";
//    // t1.dept = "IT";
//     t1.setSalary(25000);
    // cout<<endl<<"Salary is: "<<t1.getSalary();
    // cout<<endl<<"Department name: "<<t1.dept;

    t1.getInfo();
    Teacher t2(t1);
    t2.getInfo();

    return 0;
}