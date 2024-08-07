#include <iostream>
#include <string>
using namespace std;

class Complex{

    private:
        int real;
        int img;
    
    public:

        Complex(int r=0, int im = 0){
            real = r;
            img = im;
        }

        Complex operator +(Complex const &obj){
            Complex res;

            res.real = real + obj.real;
            res.img = img + obj.img;

            return res;
        }

        void print(){
            cout<<real<<" +i"<<img;
        }
};

int main()
{
    Complex c1(10,3), c2(2,6);
    Complex c3 = c1+c2;

    c3.print();
    return 0;
}

//Scope resolution :  ::
//Size of
//member selector .
//Ternary ?:
//member pointer *