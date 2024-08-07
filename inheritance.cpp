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

        // Person(){

        // }
};

class Student : public Person{
    //name, age, rollno.
    //Student has inherited the properties from the Person class.
    public:
        int rollno;

        Student(string name, int age, int rollno) : Person( name,  age){
            this->rollno = rollno;
        }

        void getinfo(){
            cout<<endl<<"Name: "<<name;
            cout<<"\nAge: "<<age;
            cout<<"\nRoll no.: "<<rollno;
        }
};

int main()
{
    Student s1("Neha",21,8);
    // s1.name = "Neha";
    // s1.age = 21;
    // s1.rollno = 8;

    s1.getinfo();
    return 0;
}