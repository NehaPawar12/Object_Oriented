#include <iostream>
using namespace std;

class Equi
{
private:
    int lenght;
    int circumference;
    int area;

public:
    Equi(int lenght)
    {
        this->lenght = lenght;
        circumference = 3 * lenght;
        area = (1.73 * lenght * lenght) / 4;
    }

    //friend void print(Equi);
    friend class Home;
};

class Home
{
public:
    void print(Equi tri)
    {
        cout << "\nCircumference: " << tri.circumference;
        cout << "\nArea: " << tri.area;
    }
};

int main()
{
    Equi t1(4);
    Home h1;

    h1.print(t1);
    return 0;
}