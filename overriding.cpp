#include <iostream>
#include <string>
using namespace std;

class Parent{
    public:
        void getInfo(){
            cout<<"Get Info";
        }
};

class Child : public Parent{
    public:
        void getInfo(){
            cout<<"Child class";
        }
};

int main()
{
    // Child c1;
    // c1.getInfo();

    Parent p1;
    p1.getInfo();
    return 0;
}