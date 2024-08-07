#include <iostream>
using namespace std;

class Fraction{
    private:
        int numerator;
        int denominator;
    
    public:
        Fraction(int num, int deno){
            this->numerator = num;
            this->denominator = deno;
        }

        operator float() const{
            return float(numerator) / float(denominator);
        }
};

int main()
{
    Fraction f(12,5);
    float val = f;
    cout<<val;
    return 0;
}