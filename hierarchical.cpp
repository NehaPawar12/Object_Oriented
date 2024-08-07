#include <iostream>
#include<string>
using namespace std;

class Person{
    public:
        string name;
        int age;

        Person(string name, int age){
            this->name = name;
            this->age = age;
        }
};

class Student : public Person{
    public:
         int rollno;

         Student(string name, int age, int rollno): Person(name, age){
            this->rollno = rollno;
         }

         void getstuinfo(){
            cout<<endl<<"Name: "<<name;
            cout<<"\nAge: "<<age;
            cout<<"\nRoll no.: "<<rollno;
         }
};

class Teacher : public Person{
    public :
        int salary;

        Teacher(string name, int age, int salary): Person(name, age){
            this->salary = salary;
        }

        void getTeacinfo(){
            cout<<endl<<"Name: "<<name;
            cout<<"\nAge: "<<age;
            cout<<"\nSalary: "<<salary;
        }

};

int main()
{
    Student s1("Neha", 21, 21141108);
    s1.getstuinfo();

    Teacher t1("Nalini", 48, 35000);
    t1.getTeacinfo();
    return 0;
}