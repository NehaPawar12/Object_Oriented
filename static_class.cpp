#include <iostream>
using namespace std;

class ABC
{
    public:
    ABC(){
        cout<<"Constructor"<<endl;
    }

    ~ABC(){
        cout<<"Destructor"<<endl;
    }
};

int main()
{
    if(true){
       ABC obj;
    }
    cout<<"End of class"<<endl;
    return 0;
}

//use Static before ABC obj.