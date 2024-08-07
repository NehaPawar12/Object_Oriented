#include <iostream>
#include<string>
using namespace std;


class Student {
    
    public:
        string name;
        int rollno;

       
};

class Teacher{
    public:
    string subject;
    double salary;
};

class TA : public Student, public Teacher{
   
   public:
        void getinfo(){
            cout<<endl<<"Name: "<<name;
            cout<<"\nSubject: "<<subject;
            cout<<"\nSalary: "<<salary;
            cout<<"\nRoll no.: "<<rollno;
        }

    
};

int main()
{
   TA g1;

   g1.name = "Neha";
   g1.rollno = 8;
   g1.subject = "M1";
   g1.salary = 25000;

    g1.getinfo();
    return 0;
}