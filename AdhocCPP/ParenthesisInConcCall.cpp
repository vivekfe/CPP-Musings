// Parenthesis or non-parenthesis versions of construction calls


#include <iostream>

class MyClass {
public:
    MyClass() { std::cout << "MyClass default constructor called." << std::endl; }
    MyClass(int x) { std::cout << "MyClass constructor called with value " << x << "." << std::endl; }
};

int main() {
    // Default initialization of basic data type
    int x;
    std::cout << "x = " << x << std::endl; // x = 0

    // Value initialization of basic data type
    int y = 0;
    std::cout << "y = " << y << std::endl; // y = 0

    // // Default initialization of class
     MyClass obj1; // MyClass default constructor called.
     MyClass obj2(); //warning: empty parentheses were disambiguated as a function declaration
    // // Value initialization of class
     MyClass obj2 = MyClass(5); // MyClass constructor called with value 5.
     
     MyClass *p= new MyClass; // MyClass default constructor called.
     MyClass *q= new MyClass();// MyClass default constructor called.
    return 0;
}
