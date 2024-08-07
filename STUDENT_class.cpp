#include <iostream>
#include <string>
using namespace std;

class Student{

    public:
    string name;
    //double cgpa;
    double* cgpaptr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }

    ~Student(){
        cout<<"\nHi delete everything";
        delete cgpaptr;//need to delete it, memory leak.. a lot of memory in made into the heap and no pointer is pointing towards it this is waste of memory.
    }

    // Student(Student &obj){
    //     this->name = obj.name;
    //     cgpaptr = new double;
    //     *cgpaptr = *obj.cgpaptr;
    // }



    void getinfo(){
        cout<<endl<<"Name: "<<name;
        cout<<endl<<"CGPA: "<<*cgpaptr;
    }
};

int main()
{
    Student s1("Neha Pawar", 8.9);
    s1.getinfo();
    // Student s2(s1);
    // s1.getinfo();
    // *(s2.cgpaptr) = 9.8;
    // s1.getinfo();
    // //s1.getinfo();
    // s2.name = "Sharvari";
    // s2.getinfo();
    return 0;
}