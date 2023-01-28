
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

    X m(5); 
    std::cout << "Ms Value is " << m.x  << std::endl ;
    X t;  // this be okay as it appears as a function declaration
    X w;   // this will work fine as it will create a default initialization
    std::cout << "Ws Value is " << w.x << std::endl ;
    X* p1 = new X();  // these will be okay as it is not considered a function call and call default
    X* p2 = new X;   // this will also call default constructor
    
    std::cout << "Ts Value is " << t.x << std::endl ;  // will throw an error
    int z();  // Unlike y() this works fine
    std::cout << "Zs Value is " << z << std::endl ;  // will throw an error
    int A{};  // Unlike y() this works fine
    std::cout << "Zs Value is " << A << std::endl ;  // will throw an error
    
   //  int x{1.888}; //will NOT compile and save trouble.
    
    return 0;
}

// int A{}; is using the C++11 uniform initialization syntax. This syntax is equivalent to int A = int(); and it will initialize A with the default value of int, which is 0.

// This feature is introduced in C++11 to avoid the most vexing parse problem and to make the initialization of variable more consistent and clear.

// When creating an object of a class and passing arguments to the constructor, you should use the {} initialization syntax.

X obj{5};  // passing an argument of 5 to the constructor

// This syntax is also known as uniform initialization, it was introduced in C++11 and is the recommended way to initialize an object of a class. It provides a consistent and clear syntax for initializing objects, and it 
// also helps to avoid some common errors such as the one you encountered with the "Most vexing parse" problem.


// the syntax X obj(); can be misinterpreted as a function declaration. It will declare a function named obj that takes 
// no arguments and returns an X object. This is known as the "most vexing parse" problem in C++.

// the syntax X obj(5); would not be considered a function declaration. It will create an object of class X 
 // and call the constructor that takes an int parameter with an argument of 5.

// When using direct initialization syntax, the compiler will first look for a constructor that can take the arguments
// you passed, in this case, the argument is 5, and it will match it with the constructor X(int value), and call it to initialize the object obj and assign the value 5 to the member variable x.
