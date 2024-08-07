#include <iostream>
#include<string>
using namespace std;

class Shape{
    public:
        virtual void draw() = 0;//pure virtual function
};

class Circle : public Shape{
    public:
        void draw(){
            cout<<"Draw a circle";
        }
};

int main()
{
    Circle c1;
    c1.draw();
    return 0;
}