
#include <iostream>

class X
{
public:
    int x;
    X() {
        std::cout << "Default constructor called !" << std::endl;

    }

    X(int value) : x(value) {
        std::cout << "Value constructor called !" << std::endl;
    }

};

struct Y
{
    Y(const X& x) : y(x.x) {}
    int y;
};

int main()
{

    X m{ 5 };
    std::cout << "Ms Value is " << m.x << std::endl;
    X t;  // this be okay as it appears as a function declaration
    X w;   // this will work fine as it will create a default initialization
    std::cout << "Ws Value is " << w.x << std::endl;
    X* p1 = new X();  // these will be okay as it is not considered a function call and call default
    X* p2 = new X;   // this will also call default constructor

    std::cout << "Ts Value is " << t.x << std::endl;  // will throw an error
    int z{};  // Unlike y() this works fine
    std::cout << "Zs Value is " << z << std::endl;  // will throw an error
    int A{};  // This is uniform initialization
    std::cout << "Zs Value is " << A << std::endl;  // will throw an error

   //  int x{1.888}; //will NOT compile and save trouble.

    return 0;
}
