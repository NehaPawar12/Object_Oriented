#include <iostream>
#include<string>
using namespace std;

class Person{
    public:
        string name;
        int age;

};

class Student : public Person{
    
    public:
        int rollno;

       
};

class Gradstudent : public Student{
    public:
     string research_area;

     void getinfo(){
            cout<<endl<<"Name: "<<name;
            cout<<"\nAge: "<<age;
            cout<<"\nRoll no.: "<<rollno;
            cout<<"\nResearch Area: "<<research_area;
     }
};

int main()
{
   Gradstudent g1;

   g1.name = "Neha";
   g1.age = 21;
   g1.rollno = 8;
   g1.research_area = "UI/UX";

    g1.getinfo();
    return 0;
}