#include <iostream>
#include <memory>  // for std::shared_ptr

class MyClass
{
public:
    MyClass(int value) : x(value) {}

    void printValue() { std::cout << x << std::endl; }

private:
    int x;
};

int main()
{
    // Create a shared pointer to a MyClass object
    std::shared_ptr<MyClass> myObj = std::make_shared<MyClass>(5);

    // Use the object through the shared pointer
    myObj->printValue();  // prints "5"

    // Multiple shared pointers can share ownership of the same object
    std::shared_ptr<MyClass> myObj2 = myObj;
    myObj2->printValue();  // also prints "5"

    // The object will be deleted automatically when the last shared pointer
    // goes out of scope or is reset
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <boost/shared_ptr.hpp>

class MyClass
{
public:
    MyClass(int value) : x(value) {}

    void printValue() { std::cout << x << std::endl; }

private:
    int x;
};

int main()
{
    // Create a shared pointer to a MyClass object
    boost::shared_ptr<MyClass> myObj = boost::make_shared<MyClass>(5);

    // Use the object through the shared pointer
    myObj->printValue();  // prints "5"

    // Multiple shared pointers can share ownership of the same object
    boost::shared_ptr<MyClass> myObj2 = myObj;
    myObj2->printValue();  // also prints "5"

    // The object will be deleted automatically when the last shared pointer
    // goes out of scope or is reset
    return 0;
}

// C++ developers created shared pointers in two places because they were introduced at different times in the evolution of the language.
// std::shared_ptr is part of the C++11 standard and it is part of the standard library, while boost::shared_ptr is part of the Boost C++ Libraries.
// Both shared pointers provide a way to manage dynamically allocated memory and share ownership of the pointer with other objects. However, there are some
// subtle differences in their implementation, such as the use of weak pointers, custom deleters, and some performance considerations.
// In general std::shared_ptr is recommended to use, as it is part of the standard library and it is portable across different platforms and compilers.
//   However, boost::shared_ptr is still widely used in older codebases or where C++11 support is not yet available.
